#include <stdlib.h>
#include <string.h>
#include "day2.h"

input_data *alloc_input(void) {
    input_data *input = malloc(sizeof(input_data) * 1000);
    int i = 0;
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'u', 4};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'u', 7};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 4};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'u', 8};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'f', 7};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'u', 1};
    input[i++] = (input_data){'d', 5};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'f', 3};
    input[i++] = (input_data){'u', 5};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'u', 3};
    input[i++] = (input_data){'f', 6};
    input[i++] = (input_data){'f', 4};
    input[i++] = (input_data){'d', 3};
    input[i++] = (input_data){'u', 9};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'u', 6};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'d', 7};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'d', 2};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 1};
    input[i++] = (input_data){'f', 5};
    input[i++] = (input_data){'f', 8};
    input[i++] = (input_data){'u', 2};
    input[i++] = (input_data){'f', 9};
    input[i++] = (input_data){'d', 8};
    input[i++] = (input_data){'f', 2};
    input[i++] = (input_data){'d', 6};
    input[i++] = (input_data){'d', 1};
    input[i++] = (input_data){'d', 9};
    input[i++] = (input_data){'f', 6};
    return input;
}

void dealloc_input(input_data *input) {
    if (input) {
        free(input);
    }
}