#include <iostream>
#include "vector.h"
#include "algorithm.h" //hbutds::bianry_search所在头文件
auto main() -> int {
    hbutds::vector<int> v{1, 3, 5, 6, 9};
    auto ret {hbutds::binary_search(v, 9)};
    std::cout<<ret;
    return 0;
}