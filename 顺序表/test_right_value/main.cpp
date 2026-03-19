#include <iostream>
#include <utility> 
struct A{};
void func(const A& a){ std::cout<<"Left value!\n"; }
void func(A&& a){ std::cout<<"Right value!\n"; }
auto get_A() -> A{ return A(); }
auto main() -> int {
    A a;
    func(a);//左值
    func(get_A());//右值
    func(std::move(a));//右值
    return 0;
}