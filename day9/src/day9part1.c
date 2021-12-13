//
// Created by shara on 2021-12-12.
//
#include <stdio.h>
#include "day9.h"

int main(void) {
    location *in = alloc_input("../../day9/resources/input.txt");
    int sum = 0;
    int x_max = 100;
    int y_max = 100;
    for (int x = 0; x < x_max; x++) {
        for (int y = 0; y < y_max; y++) {
            int val = in[x + y * x_max].val;
            int left = -1, right = -1, up = -1, down = -1;
            if (x > 0) {
                left = in[x - 1 + y * x_max].val;
            }
            if (x < x_max - 1) {
                right = in[x + 1 + y * x_max].val;
            }
            if (y > 0) {
                up = in[x + (y - 1) * x_max].val;
            }
            if (y < y_max - 1) {
                down = in[x + (y + 1) * x_max].val;
            }
            if ((left == -1 || val < left) && (right == -1 || val < right) && (up == -1 || val < up) && (down == -1 || val < down)) {
                sum += val + 1;
            }
        }
    }
    dealloc_input(in);
    printf("sum %d\n", sum);
    return 0;
}
