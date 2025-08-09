#include "graph.h"
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    graph.dfs_print_iterative('a');
    return 0; //输出a e f d c b
}