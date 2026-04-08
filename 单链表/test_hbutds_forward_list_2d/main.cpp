#include <iostream>
#include <format>
#include "forward_list.h"
using std::cout, std::format, hbutds::forward_list;
auto main() -> int {
    forward_list<forward_list<int>> lst_2d {{1,2,3},
                                            {4,5,6},
                                            {7,8,9}};
    for(auto& lst : lst_2d){
        for(int e : lst){
            cout<<format("{} ", e);
        }
        cout<<"\n";
    }
    return 0; 
}