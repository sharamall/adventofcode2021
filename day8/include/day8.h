//
// Created by shara on 2021-12-10.
//

#ifndef ADVENT2021_DAY8_H
#define ADVENT2021_DAY8_H

typedef struct {
    char **digits;
    char **output;
} input_row;

input_row *alloc_input(const char *src);
void dealloc_input(input_row *input);

#endif //ADVENT2021_DAY8_H
