#include <iostream>
#include <format>
#include <array> // std::array的头文件
using std::cout, std::format, std::array;
auto main() -> int {
    array<int, 4> arr{12, 14, 1, 3};
    for(int e : arr){
        cout<<format("{} ", e); // 输出 12 14 1 3
    }
    return 0;
}