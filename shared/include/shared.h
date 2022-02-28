//
// Created by shara on 2021-12-15.
//

#ifndef ADVENT2021_SHARED_H
#define ADVENT2021_SHARED_H

#include <stdlib.h>

/*
 * Zero alloc, memory is set to 0
 */
void *zalloc(size_t c) {
    return calloc(1, c);
}

typedef struct {
    void **items;
    int size;
    int capacity;
} list;

void push_back(list **pp_l, void *item);
void dealloc_list(list **l, int free_items);

typedef struct {
    int x, y, z;
} vector3i;

#endif //ADVENT2021_SHARED_H
