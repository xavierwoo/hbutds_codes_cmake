#include "graph.h"
#include <iostream>
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    auto bfs_path {graph.get_bfs_path('e', 'c')};
    for(auto v : bfs_path) std::cout<<v;
    return 0; //输出ebc
}