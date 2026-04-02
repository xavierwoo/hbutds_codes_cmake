#include <iostream>
#include "vector.h"
struct A{
    int* data;
    A(){ data = new int[10]; }
    ~A(){ delete[] data; }
    A(const A& o){
        std::cout<<"Copy constructor\n";
        data = new int[10];
        for(int i{0}; i<10; ++i){ data[i] = o.data[i]; }
    }
    A(A&& o){// 移动拷贝构造函数
        std::cout<<"Move Copy consturctor\n";
        data = o.data; // 夺取o的数据
        o.data = nullptr;
    }
    auto operator=(const A& o) -> A&{
        std::cout<<"Assignment\n";
        delete[] data;
        data = new int[10];
        for(int i{0}; i<10; ++i){ data[i] = o.data[i]; } 
        return *this;
    }
    auto operator=(A&& o) -> A&{ // 移动赋值操作符
        std::cout<<"Move Assignment\n";
        delete[] data;
        data = o.data; // 夺取o的资源
        o.data = nullptr;
        return *this;
    }
};  
auto main() -> int {
    hbutds::vector<A> vec{A(), A()}; // 调用两次拷贝构造函数
    vec.reserve(3); // 调用两次移动拷贝构造函数
    vec.insert(vec.begin(), A()); // 调用一次移动拷贝构造，一次移动赋值，一次赋值
    vec.erase(vec.begin()+1); // 调用一次移动赋值函数
    return 0;
}