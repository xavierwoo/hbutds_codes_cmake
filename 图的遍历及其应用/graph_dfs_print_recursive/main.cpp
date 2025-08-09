#include "graph.h"
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    graph.dfs_print_recursive('a');
    return 0; //输出a b c d e f
}