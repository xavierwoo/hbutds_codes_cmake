#include <iostream>
#include <format>
#include "graph.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::Graph<char> graph;
    graph.add_vertex('a');
    graph.add_vertex('b');
    graph.add_vertex('c');
    graph.add_edge('a', 'b', 3);
    graph.add_edge('a', 'c', 2);
    graph.add_edge('b', 'c', 1);
   
    cout<<format("Vertices:{}, Edges:{}\n", 
            graph.vertex_size(), graph.edge_size());
    
    cout<<format("Cost of edge <a, b>: {}\n", 
            graph.get_edge_cost('a', 'b')); //输出3
    cout<<format("Cost of edge <a, c>: {}\n", 
            graph.get_edge_cost('a', 'c')); //输出2
    cout<<format("Cost of edge <c, b>: {}\n", 
            graph.get_edge_cost('c', 'b')); //输出inf
    return 0; // 在此处设置断点调试查看graph的内存结构
}