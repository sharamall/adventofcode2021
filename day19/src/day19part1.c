//
// Created by shara on 2021-12-25.
//
#include "day19.h"
#include <stdio.h>
#include "shared.h"
#include <stdlib.h>

int vec3p_eq(vector3i *a, vector3i b) {
    return a->x == b.x && a->y == b.y && a->z == b.z;
}

void distance_to_scanners(int max, int index, int *scan1, int *scan2) {
    *scan1 = 0;
    *scan2 = 0;
    for (int i = index; i >= 0; i--) {
        (*scan2)++;
        if (*scan2 == max) {
            (*scan1)++;
            *scan2 = *scan1 + 1;
        }
    }
}

int contains(vector3i **arr1, vector3i val, int size) {
    for (int i = 0; i < size; i++) {
        vector3i *to_compare = arr1[i];
        if (vec3p_eq(to_compare, val)) {
            return 1;
        }
    }
    return 0;
}

typedef struct {
    int match;
    vector3i offset;
    int rotation;
} match_result;

match_result check_match(scanner *base, scanner *to_compare) {
    int matches = 0;
    int found = 0;
    vector3i offset;
    for (int r = 0; r < 24; r++) {
        for (int j = 0; j < base->distances->size; j++) {
            for (int k = 0; k < to_compare->distances->size; k++) {
                vector3i *unrotated = to_compare->distances->items[k];
                vector3i rotated = rotate(*unrotated, r);
                if (vec3p_eq(base->distances->items[j], rotated)) {
                    int beacon1, beacon2, beacon3, beacon4;
                    distance_to_scanners(base->beacons->size, j, &beacon1, &beacon2);
                    distance_to_scanners(to_compare->beacons->size, k, &beacon3, &beacon4);
                    vector3i *b_unrotated = to_compare->beacons->items[beacon3];
                    vector3i b_rotated = rotate(*b_unrotated, r);
                    offset = v3i_sub(&b_rotated, base->beacons->items[beacon1]);
                    found = 1;

                    // exit loops
                    j = base->distances->size;
                    k = to_compare->distances->size;
                }
            }
        }

        if (found) {
            for (int i = 0; i < to_compare->beacons->size; i++) {
                vector3i *unrotated = to_compare->beacons->items[i];
                vector3i rotated = rotate(*unrotated, r);
                vector3i rotated_and_offset = v3i_sub(&rotated, &offset);
                vector3i **items = (vector3i **)base->beacons->items;
                if (contains(items, rotated_and_offset, base->beacons->size)) {
                    matches++;
                    if (matches >= OVERLAP) {
                        return (match_result){.match = 1, .offset=offset, .rotation = r};
                    }
                }
            }
            found = 0;
        }
    }
    return (match_result){.match = 0};
}

void find_and_append_match(base_scanner *base_scanner, list *scanners) {
    scanner *base = base_scanner->base;
    for (int i = 0; i < scanners->size; i++) {
        scanner *to_compare = (scanner *)scanners->items[i];
        match_result match_result = check_match(base, to_compare);
        if (match_result.match) {
            for (int k = 0; k < to_compare->beacons->size; k++) {
                vector3i *unrotated = to_compare->beacons->items[k];
                vector3i rotated = rotate(*unrotated, match_result.rotation);
                vector3i rotated_and_offset = v3i_sub(&rotated, &match_result.offset);
                vector3i **items = (vector3i **)base->beacons->items;
                if (!contains(items, rotated_and_offset, base->beacons->size)) {
                    vector3i *new_beacon = malloc(sizeof(vector3i));
                    new_beacon->x = rotated_and_offset.x;
                    new_beacon->y = rotated_and_offset.y;
                    new_beacon->z = rotated_and_offset.z;
                    push_back(&base->beacons, new_beacon);
                }
            }
            dealloc_list(&to_compare->beacons, 1);
            dealloc_list(&to_compare->distances, 1);
            // need to recalculate distances so that the index algorithm works. This method will dealloc the current list
            calculate_distances(base);
            remove_at(&scanners, i);
            vector3i *scanner_pos = malloc(sizeof(vector3i));
            scanner_pos->x = match_result.offset.x;
            scanner_pos->y = match_result.offset.y;
            scanner_pos->z = match_result.offset.z;
            push_back(&base_scanner->scanner_positions, scanner_pos);
            printf("match found at index %d\n", i);
            return;
        }
    }
    printf("no matches found, oop\n");
}

void calculate_distances(scanner *in) {
    if (in->distances) {
        dealloc_list(&in->distances, 1);
    }
    for (int cur_beacon = 0; cur_beacon < in->beacons->size - 1; cur_beacon++) {
        for (int next_beacon = cur_beacon + 1; next_beacon < in->beacons->size; next_beacon++) {
            vector3i *this = (vector3i *)(in->beacons->items[cur_beacon]);
            vector3i *next = (vector3i *)(in->beacons->items[next_beacon]);
            vector3i diff = v3i_sub(this, next);
            vector3i *pDiff = malloc(sizeof(vector3i));
            *pDiff = diff;
            push_back(&in->distances, pDiff);
        }
    }
}

int main(void) {
    scanner *in = alloc_input("../../day19/resources/input.txt");
    base_scanner base = {.base = in, .scanner_positions = 0};
    list *scanners = 0;
    vector3i *scanner_origin = zalloc(sizeof(vector3i));
    push_back(&base.scanner_positions, scanner_origin);

    for (int i = 1; i < SCANNERS; i++) {
        push_back(&scanners, in + i);
    }
    while (scanners->size > 0) {
        int before_size = scanners->size;
        find_and_append_match(&base, scanners);
        if (scanners->size == before_size) {
            printf("no matches, something wrong, preventing infinite loop\n");
            break;
        }
    }
    printf("total beacons %d\n", in->beacons->size);
    dealloc_list(&in->beacons, 1);
    dealloc_list(&in->distances, 1);
    dealloc_list(&scanners, 0);
    dealloc_list(&base.scanner_positions, 1);
    free(in);
    return 0;
}

vector3i rotate(vector3i in, int dir) {
    if (dir == 0) {
        // forward 0,0,-1 up 0,1,0
        return in;
    } else if (dir == 1) {
        // forward 0,0,-1 up 1,0,0
        return (vector3i){in.y, -in.x, in.z};
    } else if (dir == 2) {
        // forward 0,0,-1 up 0,-1,0
        return (vector3i){-in.x, -in.y, in.z};
    } else if (dir == 3) {
        // forward 0,0,-1 up -1,0,0
        return (vector3i){-in.y, in.x, in.z};
    } else if (dir == 4) {
        // forward 1,0,0 up 0,1,0
        return (vector3i){-in.z, in.y, in.x};
    } else if (dir == 5) {
        // forward 1,0,0 up 0,0,1
        return (vector3i){-in.z, -in.x, in.y};
    } else if (dir == 6) {
        // forward 1,0,0 up 0,-1,0
        return (vector3i){-in.z, -in.y, -in.x};
    } else if (dir == 7) {
        // forward 1,0,0 up 0,0,-1
        return (vector3i){-in.z, in.x, -in.y};
    } else if (dir == 8) {
        // forward 0,0,1 up 0,1,0
        return (vector3i){-in.x, in.y, -in.z};
    } else if (dir == 9) {
        // forward 0,0,1 up -1,0,0
        return (vector3i){-in.y, -in.x, -in.z};
    } else if (dir == 10) {
        // forward 0,0,1 up 0,-1,0
        return (vector3i){in.x, -in.y, -in.z};
    } else if (dir == 11) {
        // forward 0,0,1 up 1,0,0
        return (vector3i){in.y, in.x, -in.z};
    } else if (dir == 12) {
        // forward -1,0,0 up 0,1,0
        return (vector3i){in.z, in.y, -in.x};
    } else if (dir == 13) {
        // forward -1,0,0 up 0,0,-1
        return (vector3i){in.z, -in.x, -in.y};
    } else if (dir == 14) {
        // forward -1,0,0 up 0,-1,0
        return (vector3i){in.z, -in.y, in.x};
    } else if (dir == 15) {
        // forward -1,0,0 up 0,0,1
        return (vector3i){in.z, in.x, in.y};
    } else if (dir == 16) {
        // forward 0,1,0 up 0,0,1
        return (vector3i){in.x, -in.z, in.y};
    } else if (dir == 17) {
        // forward 0,1,0 up 1,0,0
        return (vector3i){in.y, -in.z, -in.x};
    } else if (dir == 18) {
        // forward 0,1,0 up 0,0,-1
        return (vector3i){-in.x, -in.z, -in.y};
    } else if (dir == 19) {
        // forward 0,1,0 up -1,0,0
        return (vector3i){-in.y, -in.z, in.x};
    } else if (dir == 20) {
        // forward 0,-1,0 up 0,0,-1
        return (vector3i){in.x, in.z, -in.y};
    } else if (dir == 21) {
        // forward 0,-1,0 up -1,0,0
        return (vector3i){-in.y, in.z, -in.x};
    } else if (dir == 22) {
        // forward 0,-1,0 up 0,0,1
        return (vector3i){-in.x, in.z, in.y};
    } else if (dir == 23) {
        // forward 0,-1,0 up 1,0,0
        return (vector3i){in.y, in.z, in.x};
    } else {
        printf("Invalid dir %d\n", dir);
        return in;
    }
}


