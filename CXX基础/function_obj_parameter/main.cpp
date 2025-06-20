#include <iostream>
#include <format>
using std::cout, std::format;
struct A{
    int data{0};
    A(){}
    A(const A& o){ cout<<"Copy constructor\n"; }
};
void func(A aa){ //参数值传递
    cout<<"Call func()\n";
    aa.data = 1;
}
void func_ref(A& aa){ //参数地址传递
    cout<<"Call func_ref()\n";
    aa.data = 2;
}
int main(){
    A a;
    cout<<format("From the very beginning, a.data={}\n", a.data); // 0
    func(a); // 会触发A的拷贝构造函数，不会改变a的值
    cout<<format("After func(), a.data={}\n", a.data); // 0
    func_ref(a); // 不会触发A的拷贝构造函数，会改变a的值
    cout<<format("After func_ref(), a.data={}\n", a.data); // 2
    return 0;
}