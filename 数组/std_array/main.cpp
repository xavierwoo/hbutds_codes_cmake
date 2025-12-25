#include <iostream>
#include <format>
#include <array> // std::array的头文件
using std::cout, std::format;
auto main() -> int {
    std::array<int, 3> arr{0,10,20};
    for(int i{0}; i<arr.size(); ++i){
        cout<<format("{} ", arr[i]);
    }// 0 10 20
    return 0;
}