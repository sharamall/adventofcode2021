//
// Created by shara on 2021-12-25.
//

#ifndef ADVENT2021_DAY19_H
#define ADVENT2021_DAY19_H

#include "shared.h"
#define SCANNERS 29
#define OVERLAP 12

typedef struct {
    list *beacons; //vector3i
    list *distances; //vector3i
} scanner;

typedef struct {
    scanner *base;
    list *scanner_positions; //vector3i
} base_scanner;

/**
 * dir 0-23
 */
vector3i rotate(vector3i in, int dir);
void calculate_distances(scanner *in);

scanner *alloc_input(const char *file);
void dealloc_input(scanner *scanners);

#endif //ADVENT2021_DAY19_H
