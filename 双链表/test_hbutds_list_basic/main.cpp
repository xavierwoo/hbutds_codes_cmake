#include <iostream>
#include <format>
#include "list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::list<int> lst {1,2,3};
    lst.push_back(20);
    lst.push_front(10);
    auto it {lst.begin()};
    ++it;
    *it = 11; //可以通过迭代器修改元素值
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 10 11 2 3 20 
    return 0;
}