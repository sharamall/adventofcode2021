
set(PART1_SRC_FILES
        src/day2part1.c
        src/input.c
        )
#set(PART2_SRC_FILES
#        src/day2part2.c
#        src/input.c
#        )
add_executable(day2part1 ${PART1_SRC_FILES})
target_include_directories(day2part1 PUBLIC include)
#add_executable(day2part2 ${PART2_SRC_FILES})
#target_include_directories(day2part2 PUBLIC include)