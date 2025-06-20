cmake_minimum_required(VERSION 3.10)
project(template_lib)
set(CMAKE_CXX_STANDARD 20)
add_library(template_lib STATIC
    library.h
    library.cpp
)
target_include_directories(template_lib PUBLIC "${CMAKE_CURRENT_LIST_DIR}")