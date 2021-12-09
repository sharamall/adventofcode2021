//
// Created by shara on 2021-12-08.
//
#include <stdlib.h>
#include <stdio.h>
#include "day6.h"

int *alloc_input(const char *src) {
    FILE *file = fopen(src, "r");
    if (file) {
        int *in = malloc(sizeof(int) * 300);
        for (int i = 0; i < 300; i++) {
            if (fscanf(file, "%d%*c", in + i) != 1) {
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