#include <iostream>
#include <format>
#include "list.h"
using std::cout, std::format, hbutds::list;
auto main() -> int {
    list<list<int>> lst_2d{
        {1,2,3},
        {4,5,6},
        {7,8,9}  
    };
    for(auto& row : lst_2d){
        for(int e : row){
            cout<<format("{} ", e);
        }
        cout<<"\n";
    }
    return 0;
}