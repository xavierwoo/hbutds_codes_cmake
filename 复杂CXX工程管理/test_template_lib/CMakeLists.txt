cmake_minimum_required(VERSION 3.10)
project(test)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)
add_subdirectory(
    # 这里路径更改为template_lib文件夹在你的电脑上的位置，需要绝对路径
    /exact_path_to/template_lib

    # 这里标明template_lib库编译后的目标文件存放位置
    /exact_path_to/template_lib/build
)
add_executable(test main.cpp)
target_link_libraries(test template_lib)