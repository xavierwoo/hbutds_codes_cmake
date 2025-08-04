#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    hbutds::Graph<char> graph;
    auto a_id {graph.add_vertex('a')};
    auto b_id {graph.add_vertex('b')};
    auto c_id {graph.add_vertex('c')};
    graph.add_edge('a', 'b', 2);
    graph.add_edge('a', 'c', 1);
    graph.add_edge('b', 'c', 3);

    graph.remove_vertex('b');

    cout<<format("Cost of edge <a, b>: {}\n", 
            graph.get_edge_cost_by_id(a_id, b_id)); //输出inf
    cout<<format("Cost of edge <a, c>: {}\n", 
            graph.get_edge_cost_by_id(a_id, c_id)); //输出1
    cout<<format("Cost of edge <b, c>: {}\n", 
            graph.get_edge_cost_by_id(b_id, c_id)); //输出inf
    
    return 0;
}