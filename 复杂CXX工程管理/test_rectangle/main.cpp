#include <iostream>
#include <format>
#include <rectangle.h>
using std::cout, std::format;
auto main() -> int {
    hbutds::Rectangle r1, r2(2.0), r3(2.0,3.0);
    cout<<format("r1: l={}, w={}, area={}\n", // r1: l=1, w=1, area=1
            r1.get_length(), r1.get_width(), r1.area());
    cout<<format("r2: l={}, w={}, area={}\n", // r2: l=2, w=2, area=4
            r2.get_length(), r2.get_width(), r2.area());
    cout<<format("r3: l={}, w={}, area={}\n", // r3: l=2, w=3, area=6
            r3.get_length(), r3.get_width(), r3.area());

    r3.set_length(3.1);
    r3.set_width(5.7);

    cout<<format("r3: l={}, w={}, area={}\n", // r3: l=3.1, w=5.7, area=17.67
            r3.get_length(), r3.get_width(), r3.area());
    return 0;
}