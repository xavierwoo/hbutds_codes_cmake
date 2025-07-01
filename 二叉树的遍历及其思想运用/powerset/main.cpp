#include <iostream>
#include <format>
#include "binary_tree.h" //hbutds::get_power_set所在头文件
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<char> set {'a', 'b', 'c'};
    auto power_set {hbutds::get_power_set(set)};

    for(const auto& s : power_set){
        cout<<"{";
        for(const char e : s){
            cout<<format("{} ", e);
        }
        cout<<"} ";
    }
    //输出 {a b c } {a b } {a c } {a } {b c } {b } {c } {}
    return 0;
}