#include <iostream>
#include <format>
#include "vector.h"
using hbutds::vector, std::cout, std::format;
auto main() -> int {
    vector<vector<int>> vec_2d{{0,1,2}, {3,4,5}};
    vec_2d.push_back({6,7,8});
    for(int i{0}; i<vec_2d.size(); ++i){
        for(int j{0}; j<vec_2d[i].size(); ++j){
            cout<<format("[{}][{}]={}, ", i, j, vec_2d[i][j]);
        }
        cout<<"\n";
    }
    return 0;
}