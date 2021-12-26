//
// Created by shara on 2021-12-15.
//

#ifndef ADVENT2021_SHARED_H
#define ADVENT2021_SHARED_H

#include <stdlib.h>

/*
 * Zero alloc, memory is set to 0
 */
void *zalloc(size_t c);

typedef struct {
    void **items;
    int size;
    int capacity;
} list;

void *remove_at(list **pp_l, int index);
void push_back(list **pp_l, void *item);
void dealloc_list(list **l, int free_items);

typedef struct {
    int x, y, z;
} vector3i;

vector3i v3i_sub(vector3i *a, vector3i *b);

#endif //ADVENT2021_SHARED_H
