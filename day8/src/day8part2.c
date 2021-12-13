//
// Created by shara on 2021-12-10.
//
#include "day8.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char top;
    char t_right;
    char t_left;
    char b_left;
    char b_right;
    char bottom;
    char mid;
} known_values;

char calc_top(char **arr, int one, int seven) {
    for (int i = 0; i < 2; i++) {
        if (!(arr[seven][i] == arr[one][0] || arr[seven][i] == arr[one][1])) {
            return arr[seven][i];
        }
    }
    return arr[seven][2];
}

int16_t calc_mid_and_bottom(char **arr, int val, int four, int seven) {
    char mid_bot[2] = {0, 0};

    int matches_with_val = 0, matches_with_seven = 0;
    int val_indexes[3] = {-1, -1, -1};
    for (int j = 0; j < 5; j++) {
        int found = 0;
        for (int i = 0; i < 3; i++) {
            if (arr[seven][i] == arr[val][j]) {
                found = 1;
                matches_with_seven++;
                break;
            }
        }
        if (!found) {
            val_indexes[matches_with_val++] = j;
            if (mid_bot[0] == 0) {
                mid_bot[0] = arr[val][j];
            } else {
                mid_bot[1] = arr[val][j];
            }
        }
    }
    if (matches_with_seven == 3) {
        for (int i = 0; i < 4; i++) {
            int found = 0;
            if (arr[four][i] == mid_bot[0]) {
                mid_bot[0] = ((int)mid_bot[0] ^ (int)mid_bot[1]) & 0xFFFF;
                mid_bot[1] = ((int)mid_bot[1] ^ (int)mid_bot[0]) & 0xFFFF;
                mid_bot[0] = ((int)mid_bot[0] ^ (int)mid_bot[1]) & 0xFFFF;
                found = 1;
            } else if (arr[four][i] == mid_bot[1]) {
                found = 1;
            }
            if (found) {
                int16_t result = mid_bot[0] << 8;
                result |= mid_bot[1];
                return result;
            }
        }
        exit(1);
    } else {
        return 0;
    }
}

char calc_nine(char **arr, int three, int val, char mid) {
    int used_indexes[6] = {0, 0, 0, 0, 0, 0};
    int found_mid = 0;
    for (int i = 0; i < 5; i++) {
        int found = 0;
        for (int j = 0; j < 6; j++) {
            if (arr[three][i] == arr[val][j]) {
                found = 1;
                used_indexes[j] = 1;
                break;
            }
        }
        if (!found) {
            for (int j = 0; j < 6; j++) {
                if (arr[val][j] == mid) {
                    found_mid = 1;
                }
            }
            return found_mid;
        }
    }
    for (int i = 0; i < 6; i++) {
        if (!used_indexes[i]) {
            return arr[val][i];
        }
    }
    return 0;
}

char check_against_eight(char **arr, int val, int eight) {
    int used_indexes[7] = {0, 0, 0, 0, 0, 0, 0};
    for (int j = 0; j < 7; j++) {
        for (int i = 0; i < 6; i++) {
            if (arr[val][i] == arr[eight][j]) {
                used_indexes[j] = 1;
                break;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        if (!used_indexes[i]) {
            return arr[eight][i];
        }
    }
    return 0;
}

int is_five(char **arr, int val, int four) {
    int matches = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[val][i] == arr[four][j]) {
                matches++;
            }
        }
    }
    return matches - 2;
}

char calc_bottom_right(char **arr, int one, int two) {
    for (int i = 0; i < 2; i++) {
        int found = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[one][i] == arr[two][j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            return arr[one][i];
        }
    }
    return 0;
}

int contains(const char *str, char c) {
    int i = 0;
    while (str[i]) {
        if (str[i++] == c) {
            return 1;
        }
    }
    return 0;
}

int row_sum(char **output, known_values *vals) {
    int out = 0;
    for (int i = 0; i < 4; i++) {
        int len = strlen(output[i]);
        int val;
        if (len == 2) {
            val = 1;
        } else if (len == 3) {
            val = 7;
        } else if (len == 4) {
            val = 4;
        } else if (len == 5) {
            // 2 3 5
            if (contains(output[i], vals->t_right)) {
                if (contains(output[i], vals->b_right)) {
                    val = 3;
                } else {
                    val = 2;
                }
            } else {
                val = 5;
            }
        } else if (len == 6) {
            // 0 6 9
            if (contains(output[i], vals->mid)) {
                if (contains(output[i], vals->b_left)) {
                    val = 6;
                } else {
                    val = 9;
                }
            } else {
                val = 0;
            }
        } else if (len == 7) {
            val = 8;
        }
        int multiplier = 1;
        for (int j = 0; j < 4 - i - 1; j++) {
            multiplier *= 10;
        }
        out += val * multiplier;
    }
    return out;
}

int main(void) {
    input_row *input = alloc_input("../../day8/resources/input.txt");
    int sum = 0;
    for (int i = 0; i < 200; i++) {
        known_values known = {0, 0, 0, 0, 0, 0, 0};
        int zero = -1, one = -1, two = -1, three = -1, four = -1, five = -1, six = -1, seven = -1, eight = -1, nine = -1;
        int known_values = 0;
        while (known_values != 7) {
            int cur_known_value = known_values;
            for (int j = 0; j < 10; j++) {
                int len = strlen(input[i].digits[j]);
                if (len == 2) {
                    one = j;
                    if (known.top == 0) {
                        if (seven != -1) {
                            known.top = calc_top(input[i].digits, one, seven);
                            known_values++;
                        }
                    }
                } else if (len == 3) {
                    seven = j;
                    if (known.top == 0) {
                        if (one != -1) {
                            known.top = calc_top(input[i].digits, one, seven);
                            known_values++;
                        }
                    }
                } else if (len == 4) {
                    four = j;
                } else if (len == 5) {
                    // 2 3 5
                    if (three == -1 && four != -1 && seven != -1) {
                        int16_t val = calc_mid_and_bottom(input[i].digits, j, four, seven);
                        if (val == 0) {
                            if (is_five(input[i].digits, j, four)) {
                                five = j;
                            } else {
                                two = j;
                            }
                        } else {
                            three = j;
                            if (known.bottom == 0) {
                                known.bottom = val >> 8;
                                known_values++;
                            }
                            if (known.mid == 0) {
                                known.mid = val & 0xFF;
                                known_values++;
                            }
                        }
                    } else if (j != three && (five == -1 || two == -1) && four != -1) {
                        if (is_five(input[i].digits, j, four)) {
                            five = j;
                        } else {
                            two = j;
                        }
                    }

                    if (two != -1 && one != -1 && known.b_right == 0) {
                        known.b_right = calc_bottom_right(input[i].digits, one, two);
                        known_values++;
                    }
                } else if (len == 6) {
                    //0 6 9
                    if (known.mid != 0 && three != -1) {
                        char result = calc_nine(input[i].digits, three, j, known.mid);
                        if (!result) {
                            zero = j;
                        } else if (result == 1) {
                            six = j;
                        } else {
                            if (known.t_left == 0) {
                                known.t_left = result;
                                known_values++;
                                nine = j;
                            }
                        }
                    }
                    if (eight != -1 && zero != -1 && known.mid == 0) {
                        known.mid = check_against_eight(input[i].digits, zero, eight);
                        known_values++;
                    }
                    if (eight != -1 && six != -1 && known.t_right == 0) {
                        known.t_right = check_against_eight(input[i].digits, six, eight);
                        known_values++;
                    }
                    if (eight != -1 && nine != -1 && known.b_left == 0) {
                        known.b_left = check_against_eight(input[i].digits, nine, eight);
                        known_values++;
                    }
                } else if (len == 7) {
                    eight = j;
                }
            }
        }
        sum += row_sum(input[i].output, &known);
    }
    dealloc_input(input);
    printf("total sum %d.\n", sum);
    return 0;
}