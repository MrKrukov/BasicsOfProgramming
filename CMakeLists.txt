cmake_minimum_required(VERSION 3.20)
project(laba5a C)

set(CMAKE_C_STANDARD 11)

add_executable(laba5a removeNonLetters.c)

add_subdirectory(libs)
target_link_libraries(laba5a data_structures)
target_link_libraries(laba5a algorithms)