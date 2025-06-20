#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    int arr[4]{1,2,3,4}; //初始化列表构造数组
    for(int i{0}; i<4; ++i){
        cout<<format("{}\n", arr[i]);	
    }
    return 0;
}
