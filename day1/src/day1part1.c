#include <stdio.h>
#include "day1.h"

int main(void) {
    int *input = alloc_input();
    int increases = 0, previous = *input;

    for (int i = 1; i < 2000; i++) {
        if (input[i] > previous) {
            increases++;
        }
        previous = input[i];
    }
    dealloc_input(input);
    printf("Found %d increases.\n", increases);
    return 0;
}