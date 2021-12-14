//
// Created by shara on 2021-12-13.
//

#ifndef ADVENT2021_DAY11_H
#define ADVENT2021_DAY11_H

#define SIDE_L 10
#define ITERATIONS 100

typedef struct {
    void **items;
    int size;
    int capacity;
} list;

void push_back(list **pp_l, void *item);
int *alloc_input(const char *src);
void dealloc_input(int *input);

#endif //ADVENT2021_DAY11_H
