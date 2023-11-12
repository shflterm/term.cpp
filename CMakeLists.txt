cmake_minimum_required(VERSION 3.22)
project(term_cpp)

set(CMAKE_CXX_STANDARD 17)

add_library(term_cpp STATIC include/term.h src/term.cpp)
target_include_directories(term_cpp PUBLIC include)

#add_executable(test test.cpp)
#target_link_libraries(test term_cpp)
#target_include_directories(test PUBLIC include)