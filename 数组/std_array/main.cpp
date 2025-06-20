#include <iostream>
#include <format>
#include <array> // std::array的头文件
using std::cout, std::format;
auto main() -> int {
    std::array<int, 3> arr;
    arr[0] = 0;
    arr[1] = 10;
    arr[2] = 20;
    for(int i{0}; i<arr.size(); ++i){
        cout<<format("{}\n", arr[i]);
    }
    return 0;
}