#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    auto graph {hbutds::generate_test_graph()};
    auto [tree, weight] {graph.prim('a')};
    cout<<"Minimum spanning tree from Prim algorithm:\n";
    cout<<format("\tWeight: {}\n\tTree: \n\t", weight);
    for(auto i{0}; i<tree.size(); ++i){
        cout<<format("{} |", graph.get_vertex(i));
    }
    cout<<"\n\t";
    for(auto i{0}; i<tree.size(); ++i){
        auto father {tree[i]};
        if(father.has_value()){ 
            cout<<format("{} |", graph.get_vertex(father.value()));
        } else cout<<"- |";
    }

    return 0;
}