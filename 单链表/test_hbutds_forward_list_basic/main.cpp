#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::forward_list<int> lst;
    lst.push_front(1);
    lst.push_front(2);
    lst.push_front(3);
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 3 2 1
    return 0; 
}