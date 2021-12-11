set(PART1_SRC_FILES
        src/day6part1.c
        src/input.c
        )
set(PART2_SRC_FILES
        src/input.c
        )
add_executable(day6part1 ${PART1_SRC_FILES})
target_include_directories(day6part1 PUBLIC include)
add_executable(day6part2 ${PART2_SRC_FILES})
target_include_directories(day6part2 PUBLIC include)