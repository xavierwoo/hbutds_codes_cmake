#include <iostream>
#include <format>
#include "array.h"
using std::cout, std::format, hbutds::array;
auto main() -> int {
    array<array<int, 3>, 2> two_d_arr {
        {1,2,3},
        {4,5,6}
    };

    cout<<format("row number:{}\n", two_d_arr.size()); // 2
    cout<<format("column number:{}\n", two_d_arr[0].size()); // 3
    cout<<format("two_d_arr[0][1]={}\n", two_d_arr[0][1]); // 2
    cout<<format("two_d_arr[1][2]={}\n", two_d_arr[1][2]); // 6
    for(auto& c : two_d_arr){        //输出：
        for(int e : c){              //   1 2 3
            cout<<format("{} ", e);  //   4 5 6
        }
        cout<<"\n";
    }
    return 0;
}