#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format, hbutds::forward_list;
void test_forward_list_const(const forward_list<int>& lst){
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2 3
    
    // 以下代码无法通过编译
    // auto it {lst.begin()};
    // *it = 11;
}
auto main() -> int {
    hbutds::forward_list<int> lst{1,2,3};
    test_forward_list_const(lst);
    return 0; 
}