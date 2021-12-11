set(PART1_SRC_FILES
        src/day7part1.c
        src/input.c
        )
#set(PART2_SRC_FILES
#        src/input.c
#        )
add_executable(day7part1 ${PART1_SRC_FILES})
target_include_directories(day7part1 PUBLIC include)
#add_executable(day7part2 ${PART2_SRC_FILES})
#target_include_directories(day7part2 PUBLIC include)