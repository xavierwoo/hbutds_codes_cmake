#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    auto graph {hbutds::generate_test_DAG()};
    auto topo_sort_permutation {graph.topology_sort()};
    for(const auto& v : topo_sort_permutation.value()) {
        cout<<format("{} ", graph.get_vertex(v));
    } // 输出 a b g h c i d f e
    return 0;
}