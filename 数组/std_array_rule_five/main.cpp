#include <iostream>
#include <utility>
#include <array> // std::array的头文件
using std::cout, std::array;
struct A{
    A(){}
    ~A(){cout<<"Deconstructor!\n";}
    A(const A&){cout<<"Copy Constructor!\n";}
    A(A&&){cout<<"Move copy constructor!\n";}
    auto operator=(const A&) -> A&{
        cout<<"= operator!\n";
        return *this;
    }
    auto operator=(A&&) -> A& {
        cout<<"Move = operator!\n";
        return *this;
    }
};
auto main() -> int {
    array<A, 3> arr0;
    auto arr1{arr0}; // 调用A的拷贝构造函数3次
    auto arr2{std::move(arr0)}; //调用A的移动构造函数3次
    array<A, 3> arr3;
    arr3 = arr1; // 调用A的赋值操作符3次
    arr3 = std::move(arr1); // 调用A的移动赋值操作符3次
    return 0;
}