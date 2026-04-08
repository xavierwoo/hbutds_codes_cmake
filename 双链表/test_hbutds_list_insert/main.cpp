#include <iostream>
#include <format>
#include "list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::list<int> lst{1,2,3};
    auto it {lst.insert(lst.begin(), 0)};
    cout<<format("*it={}\n", *it); // 输出 0
    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 0 1 2 3 
    return 0;
}