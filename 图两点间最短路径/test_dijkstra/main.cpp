#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    auto [path, distance] {graph.shortest_path('a', 'c')};
    cout<<format("Length: {}\n", distance);
    cout<<"Path: ";
    for(const auto& v : path) cout<<format("{} ", v);
    return 0;
}