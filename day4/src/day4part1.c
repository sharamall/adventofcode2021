#include <stdio.h>
#include "day4.h"

int mark_board(int val, board *b) {
    space **s = &b->_00;
    for (int i = 0; i < 25; i++) {
        if (s[i]->value == val) {
            s[i]->marked = 1;
            return 1;
        }
    }
    return 0;
}

int check_win(board *b) {
    for (int r = 0; r < 5; r++) {
        space **s = &b->_00;
        int win = 1;
        for (int i = 0; i < 5; i++) {
            win &= (*(s + i + r * 5))->marked;
        }
        if (win) {
            return 1;
        }
    }
    for (int c = 0; c < 5; c++) {
        space **s = &b->_00;
        int win = 1;
        for (int i = 0; i < 5; i++) {
            win &= (*(s + c + i * 5))->marked;
        }
        if (win) {
            return 1;
        }
    }
    return 0;
}

int sum_unmarked(board *b) {
    space **s = &b->_00;
    int sum = 0;
    for (int i = 0; i < 25; i++) {
        if (!s[i]->marked) {
            sum += s[i]->value;
        }
    }
    return sum;
}

void print_board(board *b) {
    for (int i = 0; i < 25; i++) {
        printf("[%d,%d] ", ((space **)b)[i]->value, (&b->_00)[i]->marked);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
}

int main(void) {
    input *in = alloc_input("../../day4/resources/input.txt");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 100; j++) {
            mark_board(in->drawn_numbers[i], in->boards[j]);
        }
    }
    for (int last_called = 3; last_called < 100; last_called++) {
        for (int i = 0; i < 100; i++) {
            if (mark_board(in->drawn_numbers[last_called], in->boards[i])) {
                if (check_win(in->boards[i])) {
                    printf("found winner, val %d, last_called %d, product %d\n", in->drawn_numbers[last_called], last_called,
                           sum_unmarked(in->boards[i]) * in->drawn_numbers[last_called]);
                    print_board(in->boards[i]);
                    i = 100;
                    last_called = 100;
                }
            }
        }

    }
    printf("deallocating\n");
    dealloc_input(in);
    return 0;
}