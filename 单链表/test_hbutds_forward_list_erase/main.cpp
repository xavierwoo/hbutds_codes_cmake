#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::forward_list<int> lst{1,2,3};
    auto it {lst.erase_after(lst.begin())};// 删除第2个元素
    cout<<format("*it={}\n", *it);
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 3
    return 0; 
}