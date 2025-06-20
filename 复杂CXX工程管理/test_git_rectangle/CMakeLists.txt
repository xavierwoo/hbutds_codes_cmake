cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

include(FetchContent)
FetchContent_Declare(
        rectangle_lib

        # 这里填写rectangle_lib的git仓库地址，请根据实际情况修改网址
        GIT_REPOSITORY https://url_for_rectangle_lib_repo/rectangle_lib.git
        GIT_TAG v0.1.0  # 使用特定的版本
)
FetchContent_MakeAvailable(rectangle_lib)

add_executable(test main.cpp)

target_link_libraries(test rectangle_lib)

