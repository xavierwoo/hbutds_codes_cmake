#include <iostream>
#include <format>
#include <set> // std::set的头文件
using std::cout, std::format;
auto main() -> int {
    std::set<int> s{1,3,5};
    s.insert(0); // {0,1,3,5}
    s.erase(1); // {0,3,5};
    s.insert(3); // {0,3,5};
    for(int e : s){
        cout<<format("{} ", e);
    } // {0,3,5}
    if(s.contains(5)){
        cout<<"\nset contains 5\n";
    }
    return 0;
}