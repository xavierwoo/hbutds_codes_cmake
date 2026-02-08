#include <iostream>
#include <format>
#include "vector.h" //hbutds::vector所在头文件
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> vec{1, 2, 3, 4};
    auto it1 {vec.insert(vec.begin(), 0)}; // 在初始位置插入0
    cout<<format("*it1 = {}\n", *it1); // 0
    auto it2 {vec.insert(vec.end(), 10)}; // 在末尾插入10
    cout<<format("*it2 = {}\n", *it2); // 10
    auto it3 {vec.insert(vec.begin() + 2, 20)}; // 在[2]位置插入20
    cout<<format("*it3 = {}\n", *it3); // 20
    for(int e : vec){
        cout<<format("{} ", e);
    } // 0 1 20 2 3 4 10
    return 0;
}