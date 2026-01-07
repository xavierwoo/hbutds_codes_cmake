#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;

auto main() -> int {
    hbutds::vector<int> vec{1,2,3}; 
    cout<<format("Capacity = {}\n", vec.capacity()); // 输出3
    vec.reserve(5);
    cout<<format("Capacity = {}\n", vec.capacity()); // 输出5
    for(int i{0}; i<vec.size(); ++i){
        cout<<format("{} ", vec[i]);
    } // 输出 1 2 3
    return 0; 
}