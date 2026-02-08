#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;
struct A{
    int a;
    A(int aa): a(aa){}
    ~A() {cout<<format("Destruct {}!\n", a);}
};
auto main() -> int {
    hbutds::vector<A> vec{A(1), A(2)};
    vec.reserve(4);
    return 0;
}