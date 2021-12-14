//
// Created by shara on 2021-12-13.
//

#include "day11.h"
#include <stdlib.h>
#include <stdio.h>
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
            memset(new_arr + p_l->size, 0, p_l->capacity);
            free(p_l->items);
            p_l->items = new_arr;
            p_l->capacity *= 2;
        }
        p_l->items[p_l->size++] = item;
        *pp_l = p_l;
    }
}

int *alloc_input(const char *src) {
    FILE *file = fopen(src, "r");
    if (file) {
        int *in = malloc(sizeof(int) * SIDE_L * SIDE_L);
        for (int y = 0; y < SIDE_L; y++) {
            for (int x = 0; x < SIDE_L; x++) {
                char c;
                if (fscanf(file, "%c", &c) != 1) {
                    printf("bad input at %d, %d\n", x, y);
                    dealloc_input(in);
                    fclose(file);
                    return 0;
                } else {
                    *(in + x + y * SIDE_L) = c - 48;
                }
            }
            fscanf(file, "%*c");
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