#include "graph.h"
#include <iostream>
#include <format>
using std::cout, std::format;
auto main() -> int {
    auto graph {hbutds::generate_test_DAG()};
    auto path_edges {graph.critical_path().value()};
    cout<<"Critical path edges:\n";
    for(const auto [source, target] : path_edges){
        cout<<format("\t{}-{}\n", source, target);
    }
    return 0;
}