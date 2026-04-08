#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::forward_list<int> lst{1,2,3};
    lst.push_front(0);
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 0 1 2 3
    return 0; 
}