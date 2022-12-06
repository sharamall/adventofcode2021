//
// Created by shara on 2021-12-22.
//

#ifndef ADVENT2021_DAY22_H
#define ADVENT2021_DAY22_H
#define INP 1
#define ADD 2
#define MUL 3
#define DIV 4
#define MOD 5

struct instruction;
typedef struct instruction instruction;

struct instruction {
    int instruction; // uses the defines above
    int is_immediate;
    int immediate;
    char reg_dest;
    char reg_src;
    int instruction_number;
    instruction *prev;
    instruction *next;
};

typedef struct {
    int is_wildcard;
    int value;
} register_state;

typedef struct {
    register_state w;
    register_state x;
    register_state y;
    register_state z;
    int independent; // whether this state depends on previous states
} alu_state;

instruction *alloc_input(const char *file);
void dealloc_input(instruction *input);

#endif //ADVENT2021_DAY22_H
