#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::forward_list<int> lst{1};//只有一个元素的单链表
    auto it {lst.begin()}; 
    auto itr {lst.insert_after(it, 2)};
    cout<<format("inserted element:{}\n", *itr); // 2
    ++it; 
    lst.insert_after(it, 3);
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2 3
    return 0; 
}