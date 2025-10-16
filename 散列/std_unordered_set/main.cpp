#include <iostream>
#include <format>
#include <unordered_set> // std::unordered_set头文件
using std::cout, std::format;
auto main() ->int {
    std::unordered_set<int> u_set{1, 5, 8};
    u_set.insert(3);
    u_set.insert(3);
    u_set.erase(5);
    for(auto e : u_set){
        cout<<format("{} ", e);
    }// 3 8 1 注意顺序不能保证
    cout<<format("\n Contains 2: {}", u_set.contains(2));// false
    return 0;
}