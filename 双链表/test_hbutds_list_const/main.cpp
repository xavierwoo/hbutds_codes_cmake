#include <iostream>
#include <format>
#include "list.h"
using std::cout, std::format, hbutds::list;
void test_hbutds_list_const(const list<int>& lst){
    for(int e : lst){
        cout<<format("{} ", e);
    }// 输出 1 2 3
;
    // 以下代码不能编译
    // auto it {lst.begin()};
    // *it = 11; // const_iterator所指向的值不能修改
}
auto main() -> int {
    list<int> lst {1,2,3};
    test_hbutds_list_const(lst);
    return 0;
}