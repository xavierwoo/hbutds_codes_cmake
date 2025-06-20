#include<iostream>
#include<forward_list>
#include<format>
using std::cout, std::format;
auto main() -> int {
    std::forward_list<int> lst {1, 2, 3, 4};
    auto it {lst.begin()};
    ++it; // forward_list迭代器只支持++操作
    lst.erase_after(it); // 删除it的后继
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2 4
    lst.insert_after(it, 10); // it不会失效
    cout<<"\n";
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2 10 4
    lst.push_front(20); // 在链表头插入20
    cout<<"\n";
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 20 1 2 10 4	
    return 0;
}