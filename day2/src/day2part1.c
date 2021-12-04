#include <stdio.h>
#include "day2.h"

int main(void) {
    input_data *data = alloc_input();
    int depth = 0, forward = 0;
    for (int i = 0; i < 1000; i++) {
        input_data cur = data[i];
        if (cur.dir == 'f') {
            forward += cur.distance;
        } else if (cur.dir == 'd') {
            depth += cur.distance;
        } else if (cur.dir == 'u') {
            depth -= cur.distance;
        }
    }
    dealloc_input(data);
    printf("forward %d, depth %d, product %d\n", forward, depth, forward * depth);
    return 0;
}