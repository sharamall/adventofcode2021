//
// Created by shara on 2021-12-22.
//
#include "day24.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "shared.h"

typedef struct {
    alu_state state;
    int step;
} alu_state_at_step;

int are_states_equal(alu_state state1, alu_state state2) {
    int result = 1;
    if (state1.w.is_wildcard) {
        result &= state2.w.is_wildcard;
    } else {
        result &= state1.w.value == state2.w.value && !state2.w.is_wildcard;
    }
    if (state1.x.is_wildcard) {
        result &= state2.x.is_wildcard;
    } else {
        result &= state1.x.value == state2.x.value && !state2.x.is_wildcard;
    }
    if (state1.y.is_wildcard) {
        result &= state2.y.is_wildcard;
    } else {
        result &= state1.y.value == state2.y.value && !state2.y.is_wildcard;
    }
    if (state1.z.is_wildcard) {
        result &= state2.z.is_wildcard;
    } else {
        result &= state1.z.value == state2.z.value && !state2.z.is_wildcard;
    }

    return result;
}

void set_reg_value(alu_state *alu, register_state state, char reg) {
    switch (reg) {
        case 'w':
            alu->w = state;
            break;
        case 'x':
            alu->x = state;
            break;
        case 'y':
            alu->y = state;
            break;
        case 'z':
            alu->z = state;
            break;
    }
}

register_state get_reg_value(alu_state *alu, char reg) {
    switch (reg) {
        case 'w':
            return alu->w;
        case 'x':
            return alu->x;
            break;
        case 'y':
            return alu->y;
        case 'z':
            return alu->z;
    }
}

void apply_instruction(alu_state *new_state, instruction *in, int operation) {
    register_state cur_reg = get_reg_value(new_state, in->reg_dest);
    if (in->is_immediate) {
        if (in->immediate) {
            if (operation == DIV) {
                if (in->immediate == 0) {
                    printf("divide by zero!\n");
                }
            }
            if (cur_reg.is_wildcard) {
                if (operation == MUL && in->immediate == 1 ||
                    operation == DIV && in->immediate == 1 ||
                    operation == MOD && in->immediate == 1
                        ) {
                    // no op instruction
                } else {
                    cur_reg.value++; // prevent the state from being marked as a duplicate
                }
            } else {
                if (operation == ADD) {
                    cur_reg.value += in->immediate;
                } else if (operation == MUL) {
                    cur_reg.value *= in->immediate;
                } else if (operation == DIV) {
                    cur_reg.value /= in->immediate;
                } else if (operation == MOD) {
                    cur_reg.value %= in->immediate;
                } else if (operation == EQL) {
                    cur_reg.value = cur_reg.value == in->immediate;
                }
            }
        } else {
            if (operation == ADD) {
                // no op
            } else if (operation == MUL) {
                cur_reg.is_wildcard = 0;
                cur_reg.value = 0;
            } else if (operation == EQL) {
                if (cur_reg.is_wildcard) {
                    cur_reg.value++;
                } else {
                    cur_reg.value = cur_reg.value == in->immediate;
                }
            }
        }
    } else {
        register_state src_reg = get_reg_value(new_state, in->reg_src);
        if (cur_reg.is_wildcard) {
            cur_reg.value++;
            if (src_reg.is_wildcard) {
                src_reg.value++;
                set_reg_value(new_state, src_reg, in->reg_dest);
            }
        } else {
            if (src_reg.is_wildcard) {
                cur_reg.is_wildcard = 1;
                src_reg.value++;
                set_reg_value(new_state, src_reg, in->reg_dest);
            } else {
                if (operation == ADD) {
                    cur_reg.value += src_reg.value;
                } else if (operation == MUL) {
                    cur_reg.value *= src_reg.value;
                } else if (operation == DIV) {
                    cur_reg.value /= src_reg.value;
                } else if (operation == MOD) {
                    cur_reg.value %= src_reg.value;
                } else if (operation == EQL) {
                    cur_reg.value = cur_reg.value == src_reg.value;
                }
            }
        }
    }
    set_reg_value(new_state, cur_reg, in->reg_dest);
}

int main(void) {
    instruction *in = alloc_input("../../day24/resources/input.txt");
    instruction *in_start = in;
    list *states = 0;
    alu_state_at_step *root = zalloc(sizeof(alu_state_at_step));
    push_back(&states, root);
    root->state.w = (register_state){.is_wildcard=0, .value=0};
    root->state.x = (register_state){.is_wildcard=0, .value=0};
    root->state.y = (register_state){.is_wildcard=0, .value=0};
    root->state.z = (register_state){.is_wildcard=0, .value=0};

    alu_state prev_state = root->state;
    int first_input = 1;
    while (in->next) {
        alu_state new_state = prev_state;
        switch (in->instruction) {
            case INP: {
                if (!first_input) {
                    in->next->next = 0;
                    break;
                }
                first_input = 0;
                printf("%d inp %c\n", in->instruction_number, in->reg_dest);
                set_reg_value(&new_state, (register_state){.is_wildcard=1, .value=0}, in->reg_dest);
                break;
            }
            default: {
                apply_instruction(&new_state, in, in->instruction);
                if (are_states_equal(prev_state, new_state)) {
                    printf("instruction %d can be skipped.\n", in->instruction_number);
                    instruction *this = in;
                    in->prev->next = in->next;
                    free(this);
                }
                break;
            }
        }
        in = in->next;
    }

    in = in_start;
    while (in) {
        switch (in->instruction) {
            case INP: {
                printf("inp %c\n", in->reg_dest);
                break;
            }
            case ADD: {
                printf("add %c ", in->reg_dest);
                if (in->is_immediate) {
                    printf("%d\n", in->immediate);
                } else {
                    printf("%c\n", in->reg_src);
                }
                break;
            }
            case MUL: {
                printf("mul %c ", in->reg_dest);
                if (in->is_immediate) {
                    printf("%d\n", in->immediate);
                } else {
                    printf("%c\n", in->reg_src);
                }
                break;
            }
            case DIV: {
                printf("div %c ", in->reg_dest);
                if (in->is_immediate) {
                    printf("%d\n", in->immediate);
                } else {
                    printf("%c\n", in->reg_src);
                }
                break;
            }
            case MOD: {
                printf("mod %c ", in->reg_dest);
                if (in->is_immediate) {
                    printf("%d\n", in->immediate);
                } else {
                    printf("%c\n", in->reg_src);
                }
                break;
            }
            case EQL: {
                printf("eql %c ", in->reg_dest);
                if (in->is_immediate) {
                    printf("%d\n", in->immediate);
                } else {
                    printf("%c\n", in->reg_src);
                }
                break;
            }
        }
        in = in->next;
    }

    dealloc_input(in_start);
    dealloc_list(&states, 1);
    return 0;
}