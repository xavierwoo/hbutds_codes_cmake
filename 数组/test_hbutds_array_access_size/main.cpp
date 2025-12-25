#include <iostream>
#include <format>
#include "array.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::array<int, 3> arr{1,2,3};
    arr[0] = 0;
    for(int i=0; i<arr.size(); ++i){
        cout<<format("{} ", arr[i]);
    } // 输出 0 2 3
    return 0;
}