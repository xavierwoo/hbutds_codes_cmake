#include <iostream>
#include <format>
#include <vector>
#include <ranges> // 堆操作相关函数的头文件
#include <algorithm> // 使用GCC编译器同时需要引入这个头文件
using std::cout, std::format;
auto main() ->int {
    std::vector<int> heap{12,8,7,17,20,21};
    std::ranges::make_heap(heap, std::greater());
    for(int e : heap){ 
        cout<<format("{} ", e);
    } // 7 8 12 17 20 21
    heap.push_back(1); // 先将元素插入到表末尾
    std::ranges::push_heap(heap, std::greater());
    cout<<"\n after push: ";
    for(int e : heap){ 
        cout<<format("{} ", e);
    } // 1 8 7 17 20 21 12
    std::ranges::pop_heap(heap, std::greater());
    cout<<"\n after pop: ";
    for(int e : heap){ 
        cout<<format("{} ", e);
    } // 7 8 12 17 20 21 1
    return 0;
}