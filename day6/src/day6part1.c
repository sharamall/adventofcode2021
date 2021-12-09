//
// Created by shara on 2021-12-08.
//
#include "day6.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int64_t calc(int64_t *memo, int start, int days) {
    int64_t total = 0;
    total++;
    if (start <= days) {
        int memo_index = start - 1;
        if (memo_index < 0 || memo[memo_index] == -1) {
            for (int i = start + 9; i <= days; i += 7) {
                int64_t value = calc(memo, i, days);
                total += value;
                if (memo_index >= 0) {
                    memo[memo_index] = total;
                }
            }
        } else {
            total = memo[memo_index];
        }
    }
    return total;
}

int64_t run_test(const int *in, int in_count, int days) {
    int64_t *memo = malloc(sizeof(int64_t) * days);
    memset(memo, -1, sizeof(int64_t) * days);
    int64_t total = 0;
    for (int i = 0; i < in_count; i++) {
        int start = -(8 - in[i]);
        total += calc(memo, start, days);
    }
    free(memo);
    return total;
}

int main(void) {
    int *in = alloc_input("../../day6/resources/input.txt");
    int64_t result = run_test(in, 300, 80);
    printf("result %ld\n", result);
    dealloc_input(in);
    return 0;
}