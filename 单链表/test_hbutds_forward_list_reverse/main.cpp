#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::forward_list<int> lst;
    lst.push_front(1);
    lst.push_front(2);
    lst.push_front(3);
    lst.reverse();
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2 3
    return 0; 
}