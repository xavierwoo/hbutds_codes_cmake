#include <iostream>
using std::cout;

struct A{
    A(){cout<<"Default constructor\n";}
    A(const A& o){
        cout<<"Copy constructor\n";
    }
    auto operator=(const A& o) -> A&{
        cout<<"= operator\n";
        return *this;
    }
};

int main(){
    A a; // 调用默认构造函数 
    A b = a; // 调用拷贝构造函数
    A c{a}; // 调用拷贝构造函数
    a = b; // 调用=操作符
    return 0;
}