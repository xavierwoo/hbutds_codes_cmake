#include <iostream>
#include <format>
#include "vector.h"
using std::cout, std::format, hbutds::vector;
auto main() -> int {
    vector<vector<int>> vec{
        {1, 2},
        {3, 4, 5}
    };
    cout<<format("vec[0][1]={}\n", vec[0][1]); // 2
    cout<<format("vec[1][0]={}\n", vec[1][0]); // 3

    for(auto& c : vec){             //输出：
        for(int e : c){             //   1 2
            cout<<format("{} ", e); //   3 4 5
        }
        cout<<"\n";
    }
    return 0;
}