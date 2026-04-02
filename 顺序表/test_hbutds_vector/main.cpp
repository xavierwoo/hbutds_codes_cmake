#include <iostream>
#include "vector.h"

struct A{
    int a{0};
    A(){std::cout<<"Constructor!\n";}
};

auto main() -> int {
    // hbutds::vector_works();

    hbutds::vector<A> vec;
    vec.reserve(3);
    return 0;
}