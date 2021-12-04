#include <stdio.h>
#include "day1.h"

int sum_frame(const int *const input) {
    return *(input + 0) + *(input + 1) + *(input + 2);
}

int main(void) {
    int *input = alloc_input();
    int increases = 0;
    int previous = sum_frame(input);

    for (int i = 1; i < 1998; i++) {
        int sum = sum_frame(input + i);
        if (sum > previous) {
            increases++;
        }
        previous = sum;
    }
    dealloc_input(input);
    printf("Found %d increases.\n", increases);
    return 0;
}