#include <iostream>
#include <format>
using std::cout, std::format;
void func(int* ptr){
    int aa{0};
    *ptr = 42; //更改指针指向的地址所存储的值
    ptr = &aa; //更改指针的值
    cout<<format("ptr={}\n", static_cast<void*>(ptr)); 
}

int main(){
    int a{1};
    int* pa{&a};
    cout<<format("Before func() pa={}\n", static_cast<void*>(pa));
    func(pa);
    cout<<format("After func() pa={}\n", static_cast<void*>(pa)); //地址不变
    cout<<format("a={}\n", a); // a=42
    return 0;
}