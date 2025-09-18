#include <iostream>
#include "vector.h"
#include "algorithm.h" //hbutds::bianry_search所在头文件
struct Data{
    int key;
    int value;
};
struct Comparator{
    auto operator()(const Data& a, const Data& b)const -> bool{
        return a.key < b.key; 
    }
};
auto main() -> int {
    hbutds::vector<Data> v{{1, 2}, {3, 5}, {4, 0}, {7, 9}};
    auto ret {hbutds::binary_search(v, Data{4, -1}, Comparator())};
    std::cout<<ret;
    return 0;
}