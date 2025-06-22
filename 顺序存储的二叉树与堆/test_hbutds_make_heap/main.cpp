#include <iostream>
#include <format>
#include <functional>
#include "algorithm.h" // hbutds::make_heap所在头文件
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> max_heap{12,8,7,17,20,21};
    hbutds::make_heap(max_heap);
    for(int e : max_heap){
        cout<<format("{} ", e);
    } // 21 20 12 17 8 7  
    cout<<"\n";
    hbutds::vector<int> min_heap{12,8,7,17,20,21};
    hbutds::make_heap(min_heap, std::greater());
    for(int e : min_heap){
        cout<<format("{} ", e);
    } // 7 8 12 17 20 21 
    return 0;
}