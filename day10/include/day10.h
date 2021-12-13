//
// Created by shara on 2021-12-12.
//

#ifndef ADVENT2021_DAY10_H
#define ADVENT2021_DAY10_H
#define IN_LENGTH 94
typedef struct {
    void **items;
    int size;
    int capacity;
} list;

void push_back(list **pp_l, void *item);
char **alloc_input(const char *file);
void dealloc_input(char **in);

#endif //ADVENT2021_DAY10_H
