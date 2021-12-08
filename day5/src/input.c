//
// Created by shara on 2021-12-08.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "day5.h"

line_segments_meta *alloc_input(const char *location) {
    FILE *file = fopen(location, "r");
    if (file) {
        line_segments_meta *meta = malloc(sizeof(line_segments_meta));
        meta->max_x = 0;
        meta->max_y = 0;
        meta->segments = malloc(sizeof(line_seg) * 500);
        line_seg *segments = meta->segments;
        memset(meta->segments, 0, sizeof(line_seg) * 500);
        for (int i = 0; i < 500; i++) {
            int read_values = fscanf(file, "%d,%d -> %d,%d%*c", &segments[i].x1, &segments[i].y1, &segments[i].x2, &segments[i].y2);
            if (read_values == 4) {
                if (segments[i].x1 > meta->max_x) {
                    meta->max_x = segments[i].x1;
                }
                if (segments[i].x2 > meta->max_x) {
                    meta->max_x = segments[i].x2;
                }
                if (segments[i].y1 > meta->max_y) {
                    meta->max_y = segments[i].y1;
                }
                if (segments[i].y2 > meta->max_y) {
                    meta->max_y = segments[i].y2;
                }
            } else {
                printf("Error reading from file, expected to read 4 items, instead read %d.\n", read_values);
                fclose(file);
                dealloc_input(meta);
                return 0;
            }
        }
        fclose(file);
        return meta;
    } else {
        return 0;
    }
}

void dealloc_input(line_segments_meta *meta) {
    if (meta) {
        if (meta->segments) {
            free(meta->segments);
        }
        free(meta);
    }
}