set(PART1_SRC_FILES
        src/day5part1.c
        src/input.c
        )
#set(PART2_SRC_FILES
#        src/day5part2.c
#        src/input.c
#        )
add_executable(day5part1 ${PART1_SRC_FILES})
target_include_directories(day5part1 PUBLIC include)
#add_executable(day5part2 ${PART2_SRC_FILES})
#target_include_directories(day5part2 PUBLIC include)