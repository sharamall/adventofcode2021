//
// Created by shara on 2021-12-15.
//

#ifndef ADVENT2021_SHARED_H
#define ADVENT2021_SHARED_H

typedef struct {
    void **items;
    int size;
    int capacity;
} list;

void push_back(list **pp_l, void *item);
void dealloc_list(list **l, int free_items);

typedef struct {
    int x, y, z;
} vector3i;

typedef struct {
    int _00, _01, _02, _03;
    int _10, _11, _12, _13;
    int _20, _21, _22, _23;
    int _30, _31, _32, _33;
} matrix4x4i;

matrix4x4i matrix4x4i_mult_mat4x4(matrix4x4i *a, matrix4x4i *b);
// accepts null as the first argument to initialize the matrix to the value
matrix4x4i matrix4x4i_mult_scalar(matrix4x4i *a, int scalar);
matrix4x4i matrix4x4i_identity(void);
matrix4x4i matrix4x4i_look_at(vector3i *look_at, vector3i *up);
void matrix4x4i_to_int_array(matrix4x4i *mat, int *arr);
__attribute__((unused)) void matrix4x4i_print(matrix4x4i *mat);

#endif //ADVENT2021_SHARED_H
