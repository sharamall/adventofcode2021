//
// Created by shara on 2021-12-15.
//

#include "shared.h"
#include <stdlib.h>
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

void dealloc_list(list **p_list, int free_items) {
    if (p_list) {
        list *l = *p_list;
        if (l) {
            if (free_items) {
                for (int i = 0; i < l->size; i++) {
                    free(l->items[i]);
                }
            }
            free(l->items);
            free(l);
            *p_list = 0;
        }
    }
}

void *remove_at(list **pp_l, int index) {
    if (pp_l) {
        list *p_l = *pp_l;
        if (p_l) {
            if (p_l->size > index) {
                void *item = p_l->items[index];
                // TODO memcpy
                for (int i = index + 1; i < p_l->size; i++) {
                    p_l->items[i - 1] = p_l->items[i];
                }
                p_l->size--;
                return item;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

void *zalloc(size_t c) {
    return calloc(1, c);
}

vector3i v3i_sub(vector3i *a, vector3i *b) {
    return (vector3i){a->x - b->x, a->y - b->y, a->z - b->z};
}