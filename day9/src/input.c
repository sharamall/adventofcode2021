//
// Created by shara on 2021-12-12.
//
#include <stdlib.h>
#include <stdio.h>
#include "day9.h"

int *alloc_input(const char *src) {
    FILE *file = fopen(src, "r");
    if (file) {
        int *input = malloc(sizeof(int) * 100 * 100);
        for (int i = 0; i < 100 * 100; i++) {
            char c;
            if (i > 0 && i % 100 == 0) {
                fscanf(file, "%*c");
                printf("\n");
            }
            if (fscanf(file, "%c", &c) == 1) {
                input[i] = c - 48;
                printf("%d", input[i]);
            } else {
                printf("bad input at %d\n", i);
                dealloc_input(input);
                fclose(file);
                return 0;
            }
        }
        printf("\n");
        fclose(file);
        return input;
    }

    return 0;
}

void dealloc_input(int *in) {
    if (in) {
        free(in);
    }
}