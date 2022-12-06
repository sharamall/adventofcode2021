set(PART1_SRC_FILES
        src/day24part1.c
        src/input.c
        )
#set(PART2_SRC_FILES
#        src/day24part2.c
#        src/input.c
#        )
add_executable(day24part1 ${PART1_SRC_FILES})
target_include_directories(day24part1 PUBLIC include)
target_link_libraries(day24part1 PUBLIC shared)
target_include_directories(day24part1 PUBLIC include)

#add_executable(day24part2 ${PART2_SRC_FILES})
#target_include_directories(day24part2 PUBLIC include)
#target_link_libraries(day24part2 PUBLIC shared)
#target_include_directories(day24part2 PUBLIC include)