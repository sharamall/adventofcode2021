//
// Created by shara on 2021-12-12.
//

#include "day10.h"
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

char **alloc_input(const char *src) {
    FILE *file = fopen(src, "r");
    if (file) {
        char **input = malloc(sizeof(char *) * IN_LENGTH);
        for (int i = 0; i < IN_LENGTH; i++) {
            char *line = malloc(sizeof(char) * 110);
            memset(line, 0, sizeof(char) * 110);
            input[i] = line;
            char cur = 0;
            int offset = 0;
            while (cur != '\n') {
                if (fscanf(file, "%c", &cur) == 1) {
                    if (cur == '\n') {
                        line[offset++] = 0;
                    } else {
                        line[offset++] = cur;
                    }
                } else {
                    printf("bad input at %d\n", i);
                    dealloc_input(input);
                    fclose(file);
                    return 0;
                }
            }
        }
        printf("\n");
        fclose(file);
        return input;
    } else {
        return 0;
    }
}

void dealloc_input(char **in) {
    if (in) {
        for (int i = 0; i < IN_LENGTH; i++) {
            free(in[i]);
        }
        free(in);
    }
}