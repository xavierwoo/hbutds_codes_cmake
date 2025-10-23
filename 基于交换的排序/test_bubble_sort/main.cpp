#include "algorithm.h" //hbutds::bubble_sort所在头文件
#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> data{41, 12, 52, 33, 41, 20, 7};
    hbutds::bubble_sort(data);
    for(auto e : data){
        cout<<format("{} ", e);
    } // 7 12 20 33 41 41 52
    return 0;
}