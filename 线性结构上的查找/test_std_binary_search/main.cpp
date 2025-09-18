#include <iostream>
#include <vector>
#include <ranges>
auto main() -> int {
    std::vector<int> v{1, 2, 4, 5, 7, 9};
    auto ret {std::ranges::binary_search(v, 4)};
    std::cout<<ret; // 输出1
    return 0;
}