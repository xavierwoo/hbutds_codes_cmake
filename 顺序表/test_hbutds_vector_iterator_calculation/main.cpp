#include <iostream>
#include <format>
#include "vector.h" // hbutds::vector 所在头文件
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> vec{1, 2, 3, 4};
    cout<<format("begin() + 2 = {}\n", *(vec.begin() + 2));// 3
    cout<<format("end() - 2 = {}\n", *(vec.end() - 2)); // 3
    return 0;
}