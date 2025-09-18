#include <iostream>
#include <format>
#include "vector.h"
#include "algorithm.h" //hbutds::find_if所在头文件
using std::cout, std::format;
struct Data{
    int key;
    int value;
};
struct Check{
    auto operator()(const Data& a) -> bool{
        return a.key == 3; //查找key为3的元素
    }
};
auto main() -> int {
    hbutds::vector<Data> v{{1, 2}, {3, 5}, {2, 0}};
    auto it {hbutds::find_if(v, Check())};
    if(it != v.end()){
        cout<<format("Found. value={}\n", (*it).value);
    }else{
        cout<<"Not found\n";
    }
    return 0;
}