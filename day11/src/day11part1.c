//
// Created by shara on 2021-12-13.
//
#include "day11.h"
#include <stdio.h>
#include <stdlib.h>
#include "shared.h"

int main(void) {
    int *arr = alloc_input("../../day11/resources/input.txt");
    if (arr) {
        int flashes = 0;
        int before_flashes;
        for (int i = 0; i < ITERATIONS; i++) {
            list *l = 0;
            int first_run = 1;
            do {
                before_flashes = flashes;
                for (int x = 0; x < SIDE_L; x++) {
                    for (int y = 0; y < SIDE_L; y++) {
                        if (first_run) {
                            arr[x + y * SIDE_L]++;
                        }
                        if (arr[x + y * SIDE_L] > 9) {
                            flashes++;
                            arr[x + y * SIDE_L] = 0;
                            push_back(&l, x + y * SIDE_L);
                            if (x < SIDE_L - 1) {
                                arr[x + 1 + y * SIDE_L] += 1;
                            }
                            if (x > 0) {
                                arr[x - 1 + y * SIDE_L] += 1;
                            }
                            if (x < SIDE_L - 1 && y < SIDE_L - 1) {
                                arr[x + 1 + (y + 1) * SIDE_L] += 1;
                            }
                            if (x > 0 && y < SIDE_L - 1) {
                                arr[x - 1 + (y + 1) * SIDE_L] += 1;
                            }
                            if (x < SIDE_L - 1 && y > 0) {
                                arr[x + 1 + (y - 1) * SIDE_L] += 1;
                            }
                            if (x > 0 && y > 0) {
                                arr[x - 1 + (y - 1) * SIDE_L] += 1;
                            }
                            if (y < SIDE_L - 1) {
                                arr[x + (y + 1) * SIDE_L] += 1;
                            }
                            if (y > 0) {
                                arr[x + (y - 1) * SIDE_L] += 1;
                            }
                        }
                    }
                }
                first_run = 0;
            } while (before_flashes < flashes);
            if (l) {
                for (int j = 0; j < l->size; j++) {
                    arr[(int)l->items[j]] = 0;
                }
                free(l->items);
                free(l);
            }
        }
        dealloc_input(arr);
        printf("flashes %d\n", flashes);
    }
    return 0;
}