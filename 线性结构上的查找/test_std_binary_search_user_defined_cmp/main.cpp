#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>
struct Data{
    int key;
    int value;
};
struct Comparator{
    auto operator()(const Data& a, const Data& b) const -> bool{
        return a.key < b.key;
    };
};
auto main() -> int {
    std::vector<Data> v{{1, 2}, {3, 4}, {7, 5}, {9, 0}};
    auto ret {std::ranges::binary_search(v, Data{7, 5}, Comparator())};
    std::cout<<ret; // 输出1
    return 0;
}