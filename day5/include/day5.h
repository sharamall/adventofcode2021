//
// Created by shara on 2021-12-08.
//

#ifndef ADVENT2021_DAY5_H
#define ADVENT2021_DAY5_H

typedef struct {
    int x1, x2, y1, y2;
} line_seg;

typedef struct {
    int max_x, max_y;
    line_seg *segments;
} line_segments_meta;
line_segments_meta *alloc_input(const char *location);
void dealloc_input(line_segments_meta *meta);

#endif //ADVENT2021_DAY5_H
