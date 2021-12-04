#include <stdio.h>
#include <string.h>
#include "day3.h"\


void calculate_bit(int val, int shift, int *dest) {
    int mask = 0b100000000000 >> shift;
    int result = val & mask;
    if (result) {
        (*dest)++;
    } else {
        (*dest)--;
    }
}

void calculate_gamma_epsilon(bit_data *data, int *gamma, int *epsilon) {
    for (int i = 0; i < 12; i++) {
        int mask = 0b100000000000 >> i;
        if (*((int *)data + i) > 0) {
            (*gamma) += mask;
        } else {
            (*epsilon) += mask;
        }
    }
}

int main(void) {
    int *input = alloc_input();
    bit_data data;
    memset(&data, 0, sizeof(bit_data));
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 12; j++) {
            calculate_bit(input[i], j, ((int *)&data + j));
        }
    }
    dealloc_input(input);
    int gamma = 0, epsilon = 0;
    calculate_gamma_epsilon(&data, &gamma, &epsilon);
    printf("power consumption %d\n", gamma * epsilon);
    return 0;
}