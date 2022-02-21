//
// Created by shara on 2021-12-25.
//
#include "day19.h"
#include <stdio.h>
#include "shared.h"
#include <stdlib.h>
#define VEC3Z v3z()

void print_vector3i(vector3i vec) {
    printf("[%d,%d,%d]", vec.x, vec.y, vec.z);
}

vector3i vector3i_diff(vector3i a, vector3i b) {
    return (vector3i){a.x - b.x, a.y - b.y, a.z - b.z};
}

int vec3_eq(vector3i a, vector3i b) {
    return a.x == b.x && a.y == b.y && a.z == b.z;
}

vector3i v3z() {
    return (vector3i){0, 0, 0};
}

vector3i rotate(vector3i in, int dir) {
    if (dir == 0) {
        // for 0,0,-1
        // up 0,1,0
        return in;
    } else if (dir == 1) {
        // for 0,0,-1
        // up 1,0,0
        // up -> right
        // right -> down
        int up = in.y;
        int right = in.x;
        return (vector3i){up, -right, in.z};
    } else if (dir == 2) {
        // for 0,0,-1
        // up 0,-1,0
        // right -> left
        // up -> down
        int up = in.y;
        int right = in.x;
        return (vector3i){-right, -up, in.z};
    } else if (dir == 3) {
        // for 0,0,-1
        // up -1,0,0
        // up -> left
        // right -> up
        int up = in.y;
        int right = in.x;
        return (vector3i){-up, right, in.z};
    }
}

int main(void) {
    scanner *in = alloc_input("../../day19/resources/input.txt");
    int beacons = 0;
    scanner root = in[0];
    list *distances = 0;
    for (int k = 0; k < SCANNERS; k++) {
        scanner root_scanner = in[k];
        for (int i = 0; i < root_scanner.num_beacons; i++) {
            beacon b = in[0].beacons[i];
            for (int j = 0; j < root_scanner.num_beacons; j++) {
                vector3i *v = malloc(sizeof(vector3i));
                if (i == j) {
                    *v = (vector3i){0, 0, 0};
                } else {
                    *v = vector3i_diff(b.location, root_scanner.beacons[j].location);
                }
                push_back(&b.distance_to_neighbours, v);
            }
        }
    }

    for (int i = 0; i < SCANNERS; i++) {
        int matches = 0;
    }
//    for (int i = 0; i < 25; i++) {
//        print_vector3i(in[0].beacons[i]);
//        printf("\n");
//    }
//    vector3i vec = {0, 0, 0};
//    for (int i = 0; i < 23; i++) {
//        next_rot(&vec);
//        print_vector3i(vec);
//        printf("\n");
//    }
    dealloc_input(in);
    return 0;
}