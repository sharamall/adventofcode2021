#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "day3.h"

typedef struct {
    int o2;
    int co2;
} life_support;

tree_item *create_new_tree_item(int val) {
    tree_item *tree = malloc(sizeof(tree_item));
    tree->num = val;
    tree->next_0 = 0;
    tree->child_count = 0;
    tree->next_1 = 0;
    return tree;
}

void update_child_counts(tree_item *tree) {
    if (tree) {
        while (tree->parent) {
            tree->parent->child_count++;
            tree = tree->parent;
        }
    }
}

tree_item *calculate_bit(tree_item *cur, int val, int shift, int *dest) {
    int mask = 0b100000000000 >> shift;
    int result = val & mask;
    if (result) {
        (*dest)++;
        if (!cur->next_1) {
            cur->next_1 = create_new_tree_item(val);
            cur->next_1->parent = cur;
            if (shift == 11) {
                update_child_counts(cur->next_1);
            }
        }
    } else {
        (*dest)--;
        if (!cur->next_0) {
            cur->next_0 = create_new_tree_item(val);
            cur->next_0->parent = cur;
            if (shift == 11) {
                update_child_counts(cur->next_0);
            }
        }
    }
    return result ? cur->next_1 : cur->next_0;
}

int find_leaf_value(tree_item *tree) { // NOLINT(misc-no-recursion)
    if (!tree->next_0 && !tree->next_1) {
        return tree->num;
    } else if (tree->next_0) {
        return find_leaf_value(tree->next_0);
    } else {
        return find_leaf_value(tree->next_1);
    }
}

life_support calculate_gamma_epsilon(bit_data *data, int *gamma, int *epsilon, tree_item *tree) {
    life_support life = {0, 0};
    tree_item *o2 = tree;
    tree_item *co2 = tree;
    for (int i = 0; i < 12; i++) {
        int mask = 0b100000000000 >> i;
        int val = *((int *)data + i);
        if (val > 0) {
            (*gamma) += mask;
        } else {
            (*epsilon) += mask;
        }
        if (o2) {
            if (o2->next_0->child_count > o2->next_1->child_count) {
                o2 = o2->next_0;
            } else {
                o2 = o2->next_1;
            }
            if (o2->child_count <= 1) {
                life.o2 = find_leaf_value(o2);
                o2 = 0;
            }
        }
        if (co2) {
            if (co2->next_1->child_count < co2->next_0->child_count) {
                co2 = co2->next_1;
            } else {
                co2 = co2->next_0;
            }
            if (co2->child_count <= 1) {
                life.co2 = find_leaf_value(co2);
                co2 = 0;
            }
        }
    }
    return life;
}

void free_tree(tree_item *tree) { // NOLINT(misc-no-recursion)
    if (tree) {
        free_tree(tree->next_0);
        free_tree(tree->next_1);
        free(tree);
    }
}

int main(void) {
    tree_item *tree = malloc(sizeof(tree_item));
    memset(tree, 0, sizeof(tree_item));
    int *input = alloc_input();
    bit_data data;
    memset(&data, 0, sizeof(bit_data));
    for (int i = 0; i < 1000; i++) {
        tree_item *next = tree;
        for (int j = 0; j < 12; j++) {
            next = calculate_bit(next, input[i], j, ((int *)&data + j));
        }
    }
    dealloc_input(input);
    int gamma = 0, epsilon = 0;
    life_support life = calculate_gamma_epsilon(&data, &gamma, &epsilon, tree);
    free_tree(tree);
    printf("power consumption %d, life support rating %d \n", gamma * epsilon, life.o2 * life.co2);
    return 0;
}