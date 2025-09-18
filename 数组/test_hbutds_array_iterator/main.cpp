#include <iostream>
#include <format>
#include "array.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::array<int, 4> arr{1,2,3,4};
    for(auto it{arr.begin()}; it!=arr.end(); ++it){
        cout<<format("{} ", *it);
    } // 输出 1 2 3 4 
    cout<<"\n";
    for(int e : arr){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4 
    return 0;
}