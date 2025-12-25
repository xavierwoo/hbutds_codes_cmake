#include <iostream>
#include <format>
#include "array.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::array<int, 4> arr{1,2,3,4};
    auto it1 {arr.begin() + 2};
    cout<<format("begin() + 2 = {}\n", *it1); // 3

    --it1;
    cout<<format("*it1 = {}\n", *it1); // 2

    auto it2 {arr.end() - 1};
    cout<<format("end() - 1 = {}\n", *it2); // 4

    cout<<format("Distance between it2 and it1: {}\n", it2 - it1); // 2
    return 0;
}