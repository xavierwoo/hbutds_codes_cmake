#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    hbutds::Graph<char> graph;
    graph.add_vertex('a');
    graph.add_vertex('b');
    graph.add_vertex('c');
    graph.add_edge('a', 'b', 2);
    graph.add_edge('a', 'c', 1);
    cout<<format("Cost of edge <a, b>: {}\n", graph.get_edge_cost('a', 'b'));//2
    graph.remove_edge('a', 'b');
    cout<<format("Cost of edge <a, b>: {}\n", graph.get_edge_cost('a', 'b'));//inf
    return 0;
}