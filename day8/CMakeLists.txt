set(PART1_SRC_FILES
        src/day8part1.c
        src/input.c
        )
set(PART2_SRC_FILES
        src/day8part2.c
        src/input.c
        )
add_executable(day8part1 ${PART1_SRC_FILES})
target_include_directories(day8part1 PUBLIC include)
add_executable(day8part2 ${PART2_SRC_FILES})
target_include_directories(day8part2 PUBLIC include)