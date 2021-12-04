set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
set(PART1_SRC_FILES
        src/day3part1.c
        src/input.c
        )
#set(PART2_SRC_FILES
#        src/day3part2.c
#        src/input.c
#        )
add_executable(day3part1 ${PART1_SRC_FILES})
target_include_directories(day3part1 PUBLIC include)
#add_executable(day3part2 ${PART2_SRC_FILES})
#target_include_directories(day3part2 PUBLIC include)