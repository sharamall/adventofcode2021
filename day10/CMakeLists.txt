set(PART1_SRC_FILES
        src/day10part1.c
        src/input.c
        )
set(PART2_SRC_FILES
        src/day10part2.c
        src/input.c
        )
add_executable(day10part1 ${PART1_SRC_FILES})
target_include_directories(day10part1 PUBLIC include)
add_executable(day10part2 ${PART2_SRC_FILES})
target_include_directories(day10part2 PUBLIC include)