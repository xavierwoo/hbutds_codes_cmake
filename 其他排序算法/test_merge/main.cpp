#include "algorithm.h" //hbutds::merge所在头文件
#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    using SeqList = hbutds::vector<int>;
    SeqList data{12,41,41,  7,20,33,52};
    hbutds::merge(data, 0, 2, 6);
    for(auto e : data){
        cout<<format("{} ", e);
    } // 7 12 20 33 41 41 52 
    return 0;
}