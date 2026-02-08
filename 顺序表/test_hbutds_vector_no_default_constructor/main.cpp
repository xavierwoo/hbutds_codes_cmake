#include <iostream>
#include "vector.h"
struct A{
    int a;
    A(int aa): a(aa) {};
};
auto main() -> int {
    hbutds::vector<A> vec;
    vec.reserve(3);
    return 0;
}