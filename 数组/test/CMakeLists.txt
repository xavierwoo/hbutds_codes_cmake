cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(
    /Users/Xavier_1/Toys/data_structures/codes_cmake/hbutds_utilities
    /Users/Xavier_1/Toys/data_structures/codes_cmake/hbutds_utilities/build
)

add_executable(test main.cpp)
target_link_libraries(test hbutds_utilities)
