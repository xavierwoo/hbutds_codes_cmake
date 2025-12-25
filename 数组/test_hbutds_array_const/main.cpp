#include <iostream>
#include <format>
#include "array.h"
using std::cout, std::format;
auto main() -> int {
    const hbutds::array<int, 4> arr{1,2,3};
    cout<<format("arr[1] = {}\n", arr[1]);
    for(const auto e: arr){
        cout<<format("{} ", e);
    }
    return 0;
}