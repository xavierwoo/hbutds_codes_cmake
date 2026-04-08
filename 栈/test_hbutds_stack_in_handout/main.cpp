#include <iostream>
#include <format>
#include "stack.h" //hbutds::stack所在头文件
auto main() -> int {
    hbutds::stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    while(! stk.empty()){
        int e {stk.top()};
        std::cout<<std::format("{} ", e);
        stk.pop();
    } // 3 2 1
    return 0;
}