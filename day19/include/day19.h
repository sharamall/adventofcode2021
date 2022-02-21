//
// Created by shara on 2021-12-25.
//

#ifndef ADVENT2021_DAY19_H
#define ADVENT2021_DAY19_H

#include "shared.h"
#define SCANNERS 5
#define OVERLAP 12

typedef struct {
    vector3i location;
    list *distance_to_neighbours;
} beacon;

typedef struct {
    vector3i pos;
    vector3i rot;
    beacon *beacons;
    int num_beacons;
} scanner;

scanner *alloc_input(const char *file);
void dealloc_input(scanner *scanners);

#endif //ADVENT2021_DAY19_H
