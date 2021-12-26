//
// Created by shara on 2021-12-25.
//
#include "day19.h"
#include <stdlib.h>
#include <stdio.h>
#include "shared.h"
#include <string.h>

scanner *alloc_input(const char *file) {
    FILE *f = fopen(file, "r");
    if (f) {
        scanner *scanners = malloc(sizeof(scanner) * SCANNERS);
        memset(scanners, 0, sizeof(scanner) * SCANNERS);
        for (int i = 0; i < SCANNERS; i++) {
            list *l = 0;
            fscanf(f, "--- scanner %*d ---\n");
            int x, y, z;

            int c;
            c = fgetc(f);
            while (c > 0 && c != '\n') {
                ungetc(c, f);
                if (fscanf(f, "%d,%d,%d%*c", &x, &y, &z) != 3) {
                    printf("Bad input in scanner %d\n", i);
                    dealloc_input(scanners);
                    fclose(f);
                    exit(1);
                }
                vector3i *beacon = malloc(sizeof(vector3i));
                *beacon = (vector3i){x, y, z};
                push_back(&l, beacon);
                c = fgetc(f);
            }

            scanners[i].beacons = l;
            scanners[i].distances = 0;
            calculate_distances(scanners + i);
        }
        fclose(f);
        return scanners;
    } else {
        printf("Unable to open file.\n");
        exit(1);
    }
}

void dealloc_input(scanner *scanners) {
    if (scanners) {
        for (int i = 0; i < SCANNERS; i++) {
            if (scanners[i].beacons) {
                dealloc_list(&scanners[i].beacons, 1);
            }
            if (scanners[i].distances) {
                dealloc_list(&scanners[i].distances, 1);
            }
        }
        free(scanners);
    }
}