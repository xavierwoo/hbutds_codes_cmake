#include <iostream>
#include <format>
using std::cout, std::format;

template<typename T>
struct A{
    T data;
};

int main(){
    A<int> a;
    a.data = 1;
    A<char> b;
    b.data = 'b';
    cout<<format("a.data={}\n", a.data); // 输出 1
    cout<<format("b.data={}\n", b.data); // 输出 b

    A<A<int>> aa;
    aa.data.data = 11;
    cout<<format("aa.data.data={}\n", aa.data.data); // 输出 11
    return 0;
}