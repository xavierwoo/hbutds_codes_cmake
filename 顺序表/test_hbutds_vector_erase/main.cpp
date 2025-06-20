#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> vec{0, 1, 2, 3, 4, 5};
    auto it1{vec.erase(vec.begin())};
    cout<<format("*it1={}\n", *it1); // 1
    auto it2{vec.erase(vec.begin() + 2)};
    cout<<format("*it2={}\n", *it2); // 4
    auto it3{vec.erase(vec.begin() + 3)};
    cout<<format("*it3!=vec.end()? {}\n", it3!=vec.end()); // false
    for(int e : vec){
        cout<<format("{} ", e);
    } // 输出 1 2 4
    return 0;
}