//
// Created by shara on 2021-12-08.
//
#include <stdlib.h>
#include <stdio.h>
#include "day7.h"

int *alloc_input(const char *src) {
    FILE *file = fopen(src, "r");
    if (file) {
        int *in = malloc(sizeof(int) * 1000);
        for (int i = 0; i < 1000; i++) {
            if (fscanf(file, "%d%*c", in + i) != 1) {
                printf("bad input at %d\n", i);
                dealloc_input(in);
                fclose(file);
                return 0;
            }
        }
        fclose(file);
        return in;
    }

    return 0;
}

void dealloc_input(int *input) {
    if (input) {
        free(input);
    }
}