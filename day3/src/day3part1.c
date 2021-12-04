#include <stdio.h>
#include "day3.h"

int main(void) {
    char **input = alloc_input();
    int _1 = 0, _2 = 0, _3 = 0, _4 = 0, _5 = 0, _6 = 0, _7 = 0, _8 = 0, _9 = 0, _10 = 0, _11 = 0, _12 = 0;
    for (int i = 0; i < 1000; i++) {
        char *cur = input[i];
        cur[0] == '1' ? _1++ : _1--;
        cur[1] == '1' ? _2++ : _2--;
        cur[2] == '1' ? _3++ : _3--;
        cur[3] == '1' ? _4++ : _4--;
        cur[4] == '1' ? _5++ : _5--;
        cur[5] == '1' ? _6++ : _6--;
        cur[6] == '1' ? _7++ : _7--;
        cur[7] == '1' ? _8++ : _8--;
        cur[8] == '1' ? _9++ : _9--;
        cur[9] == '1' ? _10++ : _10--;
        cur[10] == '1' ? _11++ : _11--;
        cur[11] == '1' ? _12++ : _12--;
    }
    dealloc_input(input);
    int gamma = 0, epsilon = 0;
    if (_1 > 0) {
        gamma += 0b100000000000;
    } else {
        epsilon += 0b100000000000;
    }
    if (_2 > 0) {
        gamma += 0b010000000000;
    } else {
        epsilon += 0b010000000000;
    }
    if (_3 > 0) {
        gamma += 0b001000000000;
    } else {
        epsilon += 0b001000000000;
    }
    if (_4 > 0) {
        gamma += 0b000100000000;
    } else {
        epsilon += 0b000100000000;
    }
    if (_5 > 0) {
        gamma += 0b000010000000;
    } else {
        epsilon += 0b000010000000;
    }
    if (_6 > 0) {
        gamma += 0b000001000000;
    } else {
        epsilon += 0b000001000000;
    }
    if (_7 > 0) {
        gamma += 0b000000100000;
    } else {
        epsilon += 0b000000100000;
    }
    if (_8 > 0) {
        gamma += 0b000000010000;
    } else {
        epsilon += 0b000000010000;
    }
    if (_9 > 0) {
        gamma += 0b000000001000;
    } else {
        epsilon += 0b000000001000;
    }
    if (_10 > 0) {
        gamma += 0b000000000100;
    } else {
        epsilon += 0b000000000100;
    }
    if (_11 > 0) {
        gamma += 0b000000000010;
    } else {
        epsilon += 0b000000000010;
    }
    if (_12 > 0) {
        gamma += 0b000000000001;
    } else {
        epsilon += 0b000000000001;
    }
    printf("power consumption %d\n", gamma * epsilon);
    return 0;
}