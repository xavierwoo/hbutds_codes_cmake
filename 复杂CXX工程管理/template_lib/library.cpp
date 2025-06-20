#include "library.h"
#include <cassert>
#include <iostream>
void template_test::it_works(){
    assert(add(1,2) == 3);
    double e{0.0001};
    auto res{add(1.1, 2.2)};
    assert(res < 3.3 + e && res > 3.3 - e);
    std::cout<<"add template function works!\n";
}