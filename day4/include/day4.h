//
// Created by shara on 2021-12-04.
//

#ifndef ADVENT2021_DAY4_H
#define ADVENT2021_DAY4_H
typedef struct {
    int value;
    int marked;
} space;
typedef struct {
    space *_00, *_10, *_20, *_30, *_40;
    space *_01, *_11, *_21, *_31, *_41;
    space *_02, *_12, *_22, *_32, *_42;
    space *_03, *_13, *_23, *_33, *_43;
    space *_04, *_14, *_24, *_34, *_44;
    space *end;
} board;
typedef struct {
    int *drawn_numbers;
    board **boards;
} input;
input *alloc_input(const char *location);
void dealloc_input(input *input);

#endif //ADVENT2021_DAY4_H
