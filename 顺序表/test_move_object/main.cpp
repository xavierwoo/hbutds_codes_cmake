#include <iostream>
#include <utility>
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
        data = o.data; // 夺取o的资源
        o.data = nullptr;
        return *this;
    }
};  
auto main() -> int {
    A a;
    A a1(a); // 调用普通构造函数
    A a2(std::move(a)); // 调用移动构造函数，移动后a丢失自己的资源
    A a3;
    a3 = a1; // 调用普通赋值操作符
    A a4;
    a4 = std::move(a3); // 调用移动赋值操作符，移动后a3丢失自己的资源
    return 0;
}