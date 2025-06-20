#include <iostream>
#include <format>
#include <stack> // std::stack头文件
using std::cout, std::format;
auto main() ->int {
    std::stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    while(! stk.empty()){
        int e {stk.top()}; //top函数获取栈顶元素
        cout<<format("{} ", e);
        stk.pop(); //弹出栈顶元素
    }//3 2 1
    return 0;
}