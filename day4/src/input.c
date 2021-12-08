#include <stdlib.h>
#include <stdio.h>
#include "day4.h"

int read_number(FILE *file, int *dest) {
    int val;
    if (fscanf(file, "%d%*c", &val)) {
        *dest = val;
        return 0;
    } else {
        printf("didn't read 1 argument from file\n");
        return 1;
    }
}

input *alloc_input(const char *location) {
    FILE *file = fopen(location, "r");
    input *in;
    if (file) {
        in = malloc(sizeof(input));
        in->drawn_numbers = malloc(sizeof(int) * 100);
        in->boards = malloc(sizeof(board *) * 101);
        *(in->boards) = 0;
        for (int i = 0; i < 100; i++) {
            if (read_number(file, in->drawn_numbers + i)) {
                fclose(file);
                dealloc_input(in);
                return 0;
            }
        }
        char dummy;
        if (!fscanf(file, "%c", &dummy)) {
            fclose(file);
            dealloc_input(in);
            printf("didn't read newline between drawn numbers and boards.");
            return 0;
        }
        for (int i = 0; i < 100; i++) {
            *(in->boards + i + 1) = 0;
            in->boards[i] = malloc(sizeof(board));
            in->boards[i]->end = 0;
            in->boards[i]->win = 0;
            for (int j = 0; j < 25; j++) {
                space **spaces = &in->boards[i]->_00;
                spaces[j] = malloc(sizeof(space));
                read_number(file, &(spaces[j]->value));
                spaces[j]->marked = 0;
            }

        }
        fclose(file);
    } else {
        in = 0;
    }

    return in;
}

void dealloc_input(input *input) {
    if (input) {
        if (input->boards) {
            int i = 0;
            while (input->boards[i]) {
                int j = 0;
                space **spaces = &input->boards[i]->_00;
                while (*(spaces + j)) {
                    free(*(spaces + j++));
                }
                free(input->boards[i++]);
            }
            free(input->boards);
        }
        if (input->drawn_numbers) {
            free(input->drawn_numbers);
        }
        free(input);
    }
}