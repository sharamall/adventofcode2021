//
// Created by shara on 2021-12-10.
//
#include "day7.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void) {
    int *in = alloc_input("../../day7/resources/input.txt");
    if (!in) {
        printf("bad read\n");
        exit(1);
    }
    int in_count = 1000;
    int64_t total = 0;
    int max = -999999999, min = 999999999;
    for (int i = 0; i < in_count; i++) {
        if (in[i] < min) {
            min = in[i];
        }
        if (in[i] > max) {
            max = in[i];
        }
    }
    int64_t min_fuel = 99999999999999;
    int result = 0;
    printf("min %d max %d \n", min, max);
    for (int i = 0; i < max + min; i++) {
        for (int j = 0; j < in_count; j++) {
            int64_t difference = abs(in[j] - i);
            int64_t sum = (difference * (difference + 1)) / 2;
            total += sum;
        }
        if (total < min_fuel) {
            result = total;
            min_fuel = total;
        }
        total = 0;
    }

    printf("result %d\n", result);
    dealloc_input(in);
    return 0;
}