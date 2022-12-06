//
// Created by shara on 2021-12-22.
//

#include "day24.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "shared.h"

instruction *alloc_input(const char *file) {
    FILE *f = fopen(file, "r");
    if (f) {
        int instruction_num = 0;
        char instruction_char_2, reg;
        struct instruction *start = 0, *prev = 0;

        while (fscanf(f, "%*c%c%*c %c", &instruction_char_2, &reg) == 2) {
            instruction *cur = zalloc(sizeof(instruction));
            cur->prev = prev;
            cur->instruction_number = instruction_num++;
            cur->reg_dest = reg;
            if (instruction_char_2 == 'n') {
                cur->instruction = INP;
            } else if (instruction_char_2 == 'd') {
                cur->instruction = ADD;
            } else if (instruction_char_2 == 'u') {
                cur->instruction = MUL;
            } else if (instruction_char_2 == 'i') {
                cur->instruction = DIV;
            } else if (instruction_char_2 == 'o') {
                cur->instruction = MOD;
            }
            if (start) {
                prev->next = cur;
            } else {
                start = cur;
            }

            prev = cur;
            if (cur->instruction == INP) {
                fscanf(f, "%*c"); // chomp newline
            } else {
                char second_operand[4] = "\0\0\0";
                int read_chars = fscanf(f, "%s ", second_operand);
                if (second_operand[0] == '-') {
                    // negative immediate
                    int val = second_operand[1] - 48;
                    if (second_operand[2] != '\0') {
                        val *= 10;
                        val += second_operand[2] - 48;
                    }
                    cur->is_immediate = 1;
                    cur->immediate = -val;
                } else if (second_operand[0] < 58) {
                    int val = second_operand[0] - 48;
                    if (second_operand[1] != '\0') {
                        val *= 10;
                        val += second_operand[1] - 48;
                    }
                    cur->is_immediate = 1;
                    cur->immediate = val;
                } else {
                    cur->is_immediate = 0;
                    cur->reg_src = second_operand[0];
                }
            }
            printf("");
        }
        fclose(f);
        return start;
    } else {
        printf("Unable to open file.\n");
        exit(1);
    }
}

void dealloc_input(instruction *input) {
    if (input) {
        instruction *next = input->next;
        free(input);
        dealloc_input(next);
    }
}