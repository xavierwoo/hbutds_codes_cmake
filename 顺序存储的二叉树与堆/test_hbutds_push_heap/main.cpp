#include <iostream>
#include <format>
#include <functional>
#include "algorithm.h" // hbutds::push_heap所在头文件
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> max_heap{21, 20, 12, 17, 8, 7};
    max_heap.push_back(13);
    hbutds::push_heap(max_heap);
    for(int e : max_heap){
        cout<<format("{} ", e);
    } // 21 20 13 17 8 7 12
    cout<<"\n";
    hbutds::vector<int> min_heap{7, 8, 12, 17, 20, 21};
    min_heap.push_back(5);
    hbutds::push_heap(min_heap, std::greater<>());
    for(int e : min_heap){
        cout<<format("{} ", e);
    } // 5 8 7 17 20 21 12
    return 0;
}