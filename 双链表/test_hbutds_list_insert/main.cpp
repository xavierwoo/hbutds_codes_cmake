#include <iostream>
#include <format>
#include "list.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    auto it {lst.insert(lst.begin(), 0)};

    cout<<format("*it={}\n", *it); // 输出 0

    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 0 1 2 3 

    cout<<"\nReversed traversal: ";
    it = lst.end();
    do{
        --it;
        cout<<format("{} ", *it);
    }while(it != lst.begin()); // 输出 3 2 1 0

    return 0;
}