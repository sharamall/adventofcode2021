set(PART1_SRC_FILES
        src/day4part1.c
        src/input.c
        )
set(PART2_SRC_FILES
        src/day4part2.c
        src/input.c
        )
add_executable(day4part1 ${PART1_SRC_FILES})
target_include_directories(day4part1 PUBLIC include)
add_executable(day4part2 ${PART2_SRC_FILES})
target_include_directories(day4part2 PUBLIC include)