//
// Created by shara on 2021-12-10.
//
#include "day8.h"
#include <string.h>
#include <stdio.h>

int main(void) {
    input_row *input = alloc_input("../../day8/resources/input.txt");
    int ones = 0, fours = 0, sevens = 0, eights = 0;
    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 4; j++) {
            int len = strlen(input[i].output[j]);
            if (len == 3) {
                sevens++;
            } else if (len == 4) {
                fours++;
            } else if (len == 2) {
                ones++;
            } else if (len == 7) {
                eights++;
            }
        }
    }
    printf("sum of all unique digits %d\n", ones + fours + sevens + eights);
    dealloc_input(input);
    return 0;
}