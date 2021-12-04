
set(SRC_FILES
        src/day1part1.c
        src/input.c
        )
add_executable(day1 ${SRC_FILES})
target_include_directories(day1 PUBLIC include)