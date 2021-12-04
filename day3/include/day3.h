//
// Created by shara on 2021-12-03.
//

#ifndef ADVENT2021_DAY3_H
#define ADVENT2021_DAY3_H
struct tree_item;
typedef struct tree_item tree_item;

typedef struct {
    int _1;
    int _2;
    int _3;
    int _4;
    int _5;
    int _6;
    int _7;
    int _8;
    int _9;
    int _10;
    int _11;
    int _12;
} bit_data;

struct tree_item {
    tree_item *next_1;
    tree_item *next_0;
    tree_item *parent;
    int num;
    int child_count;
};

int *alloc_input(void);
void dealloc_input(int *input);

#endif //ADVENT2021_DAY3_H
