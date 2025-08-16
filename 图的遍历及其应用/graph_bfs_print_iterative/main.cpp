#include "graph.h"
auto main() -> int {
    auto graph{hbutds::generate_test_graph()};
    graph.bfs_print_iterative('a');
    return 0; //输出a b e c d f
}