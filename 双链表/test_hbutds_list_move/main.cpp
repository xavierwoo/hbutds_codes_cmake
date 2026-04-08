#include <iostream>
#include <utility>
#include "list.h"
struct A{
    A(){}
    A(const A&){ std::cout<<"Copy constructor\n"; }
    A(A&&){ std::cout<<"Move Copy\n"; } // 移动拷贝构造函数
    auto operator=(const A&) -> A& { 
        std::cout<<"Assignment operator\n"; 
        return *this;
    }
    auto operator=(A&&) -> A& { // 移动赋值操作符
        std::cout<<"Move Assigment\n";
        return *this;
    }
};
auto main() -> int {
    hbutds::list<A> lst0 {A(), A(), A()}; //执行三次A拷贝构造函数
    
    // 执行移动拷贝构造函数，没有输出
    hbutds::list<A> lst1 {std::move(lst0)};
    hbutds::list<A> lst2 {A(), A()}; //执行两次A拷贝构造函数
    lst2 = std::move(lst1); //执行移动赋值操作符，没有输出
    return 0; 
}