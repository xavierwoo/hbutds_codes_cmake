#include <iostream>
#include <format>
#include <functional>
#include "algorithm.h" // hbutds::pop_heap所在头文件
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> max_heap{21, 20, 12, 17, 8, 7};
    hbutds::pop_heap(max_heap);
    for(int e : max_heap){
        cout<<format("{} ", e);
    } // 20 17 12 7 8 21
    cout<<"\n";
    hbutds::vector<int> min_heap{7, 8, 12, 17, 20, 21};
    hbutds::pop_heap(min_heap, std::greater<>());
    for(int e : min_heap){
        cout<<format("{} ", e);
    } // 8 17 12 21 20 7
    return 0;
}