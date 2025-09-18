#include <iostream>
#include <format>
#include <vector>
#include <ranges>
using std::cout, std::format;
auto main() -> int {
    std::vector<int> v{3, 1, 12 , 4, 6};//也可以使用std::forward_list和std::list
    auto it {std::ranges::find(v, 12)}; //尝试将查询值换成其他
    if(it != v.end()){
        cout<<format("Found {}\n", *it);
    }else{
        cout<<"Not found\n";
    }
    return 0;
}