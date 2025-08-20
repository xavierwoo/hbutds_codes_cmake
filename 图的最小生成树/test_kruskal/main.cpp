#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    auto [edges, weight] {graph.kruskal()};
    cout<<"Spanning tree from Kruskal algorithm:\n";
    cout<<format("\tWeight: {}\n", weight);
    cout<<"\tEdges:\n";
    for(auto [s, t, c]: edges) {
        cout<<format("\t\t({}, {}) cost:{}\n", 
                graph.get_vertex(s), graph.get_vertex(t), c);
    }
    return 0;
}