//
// Created by shara on 2021-12-08.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "day5.h"

int main(void) {
    line_segments_meta *meta = alloc_input("../../day5/resources/input.txt");
    size_t size = sizeof(int) * (meta->max_x + 1) * (meta->max_y + 1);
    int *grid = malloc(size);
    memset(grid, 0, size);
    line_seg *segments = meta->segments;
    int overlaps = 0;
    for (int i = 0; i < 500; i++) {
        int x_dir = (segments[i].x1 - segments[i].x2) > 0 ? -1 : 1;
        int y_dir = (segments[i].y1 - segments[i].y2) > 0 ? -1 : 1;
        if (segments[i].x1 == segments[i].x2 || segments[i].y1 == segments[i].y2) {
            for (int x = segments[i].x1; (x_dir == 1 ? x <= segments[i].x2 : x >= segments[i].x2); x += x_dir) {
                for (int y = segments[i].y1; (y_dir == 1 ? y <= segments[i].y2 : y >= segments[i].y2); y += y_dir) {
                    int index = x + y * meta->max_x;
                    grid[index]++;
                    if (grid[index] == 2) {
                        overlaps++;
                    }
                }
            }
        } else {
            int count = abs(segments[i].x1 - segments[i].x2);
            for (int c = 0; c <= count; c++) {
                int index = (segments[i].x1 + x_dir * c) + (segments[i].y1 + y_dir * c) * meta->max_x;
                grid[index]++;
                if (grid[index] == 2) {
                    overlaps++;
                }
            }
        }
    }
    free(grid);
    printf("found %d overlaps\n", overlaps);
    dealloc_input(meta);
    return 0;
}