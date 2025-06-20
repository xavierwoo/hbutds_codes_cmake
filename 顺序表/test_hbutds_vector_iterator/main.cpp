#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::vector<int> vec{1, 2, 3, 4};
    cout<<"Using iterator: ";
    for(auto it{vec.begin()}; it != vec.end(); ++it){
        cout<<format("{} ", *it);
    } // 输出 1 2 3 4
    cout<<"\nUsing for each: ";
    for(int e : vec){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4
    return 0;
}