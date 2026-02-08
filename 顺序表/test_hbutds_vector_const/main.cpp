#include <iostream>
#include <format>
#include "vector.h" // hbutds::vector 所在头文件
using std::cout, std::format;
auto main() -> int {
    const hbutds::vector<int> vec{1, 2, 3, 4};
    for(int i{0}; i<vec.size(); ++i){
        cout<<format("{} ", vec[i]);
    }// 1 2 3 4
    cout<<"\n";
    for(auto e : vec){
        cout<<format("{} ", e);
    }// 1 2 3 4
    return 0;
}