#include "algorithm.h" //hbutds::merge_sort所在头文件
#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    using SeqList = hbutds::vector<int>;
    SeqList data{41, 12, 41, 33, 52, 7, 20};
    hbutds::merge_sort(data);
    for(auto e : data){
        cout<<format("{} ", e);
    } // 7 12 20 33 41 41 52 
    return 0;
}