#include <iostream>
#include <utility>
#include "vector.h"
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
    hbutds::vector<A> vec0{A(), A(), A()}; // 执行三次A拷贝构造函数
    hbutds::vector<A> vec1(std::move(vec0)); // 执行移动拷贝构造函数，没有输出
    hbutds::vector<A> vec2;
    vec2 = std::move(vec1); // 执行移动赋值操作，没有输出
    return 0;
}