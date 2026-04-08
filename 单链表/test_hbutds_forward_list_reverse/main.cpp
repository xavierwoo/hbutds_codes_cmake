#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::forward_list<int> lst{3,2,1};
    lst.reverse();
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2 3
    return 0; 
}