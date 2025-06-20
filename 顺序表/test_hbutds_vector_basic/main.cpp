#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;
struct A{
    int data{0};
    A()=default;
    ~A(){cout<<"Destructor!\n";}
    A(int d):data(d){};
};
auto main() -> int {
    hbutds::vector<A> vec{A(0), A(1), A(2)}; // 调用三次A的析构函数
    cout<<format("Capacity = {}\n", vec.capacity()); // 输出3
    vec.reserve(5);
    cout<<format("Capacity = {}\n", vec.capacity()); // 输出5
    for(int i{0}; i<vec.size(); ++i){
        cout<<format("{} ", vec[i].data);
    } // 输出 0 1 2
    cout<<"\n";
    return 0; // 调用三次A的析构函数
}