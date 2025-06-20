#include <iostream>
#include "list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::list<int> lst;
    lst.push_back(0);
    lst.push_back(1);
    lst.push_back(2);

    auto it{lst.erase(lst.begin())};
    cout<<format("*it={}\n", *it); // 输出 1

    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2
    return 0;
}