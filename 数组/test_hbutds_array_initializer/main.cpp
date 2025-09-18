#include <iostream>
#include <format>
#include "array.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::array<int, 4> arr{1,2,3};
    for(int i{0}; i<arr.size(); ++i){
        cout<<format("{} ", arr[i]);
    } // 输出 1 2 3 0
    return 0;
}