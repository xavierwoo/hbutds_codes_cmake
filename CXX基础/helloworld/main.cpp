#include <iostream>
#include <format>
using std::cout, std::format;

auto main() -> int {
    auto my_name{"Xavier"};
    auto version{20};
    cout<<format("Hello World! I'm {}. This is C++{}!\n", my_name, version);  
    return 0;
}