//
// Created by shara on 2021-12-12.
//
#include <stdlib.h>
#include <stdio.h>
#include "day9.h"
#include <string.h>

void push_back(list **pp_l, void *item) {
    if (pp_l) {
        list *p_l = *pp_l;
        if (!p_l) {
            p_l = malloc(sizeof(list));
            p_l->items = malloc(sizeof(void *) * 1);
            p_l->capacity = 1;
            p_l->size = 0;
        } else if (p_l->size == p_l->capacity) {
            void **new_arr = malloc(sizeof(void *) * p_l->capacity * 2);
            memcpy(new_arr, p_l->items, p_l->capacity * sizeof(void *));
            free(p_l->items);
            p_l->items = new_arr;
            p_l->capacity *= 2;
        }
        p_l->items[p_l->size++] = item;
        *pp_l = p_l;
    }
}

location *alloc_input(const char *src) {
    FILE *file = fopen(src, "r");
    if (file) {
        location *input = malloc(sizeof(location) * WIDTH * 100);
        for (int i = 0; i < WIDTH * HEIGHT; i++) {
            input[i].marked = 0;
            input[i].sum_of_basin = 0;
            char c;
            if (i > 0 && i % WIDTH == 0) {
                fscanf(file, "%*c");
            }
            if (fscanf(file, "%c", &c) == 1) {
                input[i].val = c - 48;
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

void dealloc_input(location *in) {
    if (in) {
        free(in);
    }
}