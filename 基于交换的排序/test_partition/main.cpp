#include "algorithm.h" //hbutds::partition所在头文件
#include <iostream>
#include <format>
#include <vector>
using std::cout, std::format;
auto main() -> int {
    std::vector<int> data{41, 12, 41, 33, 53, 7, 20};
    hbutds::partition(data.begin(), data.end());
    for(auto e : data){
        cout<<format("{} ", e);
    } // 2 7 20 33 53 41 41
    return 0;
}