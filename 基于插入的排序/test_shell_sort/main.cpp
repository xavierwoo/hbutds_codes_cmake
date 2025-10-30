#include "algorithm.h" //hbutds::shell_sort所在头文件
#include <iostream>
#include <format>
#include "vector.h"
#include <vector>
using std::cout, std::format;
auto main() -> int {
    using SeqList = hbutds::vector<int>;
    SeqList data{33, 41, 52, 12, 41, 20, 7, 2};
    hbutds::shell_sort(data);
    for(auto e : data){
        cout<<format("{} ", e);
    } // 7 12 20 33 41 41 52
    return 0;
}