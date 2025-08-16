#include "graph.h"
#include <iostream>
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    auto dfs_path {graph.get_dfs_path('e', 'b')};
    for(auto v : dfs_path) std::cout<<v;
    return 0; //输出eab
}