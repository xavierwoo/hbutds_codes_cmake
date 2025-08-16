cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

include(FetchContent)
FetchContent_Declare(
    hbutds_utilities

    # hbut_utilities的Git仓库地址
    GIT_REPOSITORY https://github.com/xavierwoo/hbutds_utilities.git
    GIT_TAG v2.8.5 # 使用特定的版本
)
FetchContent_MakeAvailable(hbutds_utilities)

add_executable(test main.cpp)

target_link_libraries(test hbutds_utilities)
