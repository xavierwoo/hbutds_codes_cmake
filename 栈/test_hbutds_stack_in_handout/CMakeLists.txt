cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)

include(FetchContent)
FetchContent_Declare(
    hbutds_utilities

    # hbut_utilities的Git仓库地址
    GIT_REPOSITORY https://gitee.com/xavierwoo2008/hbutds_utilities.git
    # GIT_TAG s0.17.1  # 测试简单版hbutds::stack
    GIT_TAG a0.15.0 # 测试高级版hbutds::stack
)
FetchContent_MakeAvailable(hbutds_utilities)

add_executable(test main.cpp)

target_link_libraries(test hbutds_utilities)
