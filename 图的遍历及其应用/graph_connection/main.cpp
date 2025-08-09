#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    cout<<format("Graph is connected: {}\n", graph.is_connected());//true
    graph.add_vertex('x');
    cout<<format("Graph is connected: {}\n", graph.is_connected());//false
    return 0;
}