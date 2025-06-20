#include <iostream>
#include <format>
#include <vector> // std::vector的头文件
using std::cout, std::format;
auto main() -> int {
    std::vector<int> vec{1,2,3,4}; // 初始化列表
    // 传统方式遍历
    for(int i{0}; i<vec.size(); ++i){
        cout<<format("{} ", vec[i]); //使用[]访问元素
    } // 输出 1 2 3 4
    cout<<"\n";
    // 使用迭代器遍历
    for(auto it{vec.begin()}; it!=vec.end(); ++it){
        cout<<format("{} ", *it);
    } // 输出 1 2 3 4
    cout<<"\n";
    // 使用 for each 循环
    for(auto e : vec){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4

    return 0;
}