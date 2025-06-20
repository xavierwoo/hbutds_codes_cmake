#include <iostream>
#include <format>
#include "array.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::array<int, 3> arr;
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for(int i=0; i<arr.size(); ++i){
        cout<<format("{} ", arr[i]);
    } // 输出 0 1 2
    return 0;
}