//
// Created by shara on 2021-12-03.
//

#ifndef ADVENT2021_DAY2_H
#define ADVENT2021_DAY2_H

typedef struct {
    char dir;
    int distance;
} input_data;

input_data *alloc_input(void);
void dealloc_input(input_data *input);

#endif //ADVENT2021_DAY2_H
