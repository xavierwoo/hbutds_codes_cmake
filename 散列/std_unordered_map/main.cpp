#include <iostream>
#include <format>
#include <string>
#include <unordered_map> // std::unordered_map头文件
using std::cout, std::format;
auto main() ->int {
    std::unordered_map<std::string, int> u_map{{"a", 1}, {"b", 5}, {"c", 8}};
    u_map.insert({"f", 10}); // 插入二元组{"f", 10}
    u_map["d"] = 2; // 插入二元组{"d", 2}

    u_map.insert({"b", 4}); // insert函数会忽略这个操作，因为b已经存在
    u_map["a"] = 0; // []操作符会修改“a”对应的值
    u_map.erase("c");

    for(auto& [key, value] : u_map){
        cout<<format("({}, {}) ", key, value);
    }// (d, 2) (b, 5) (f, 10) (a, 0)
    cout<<format("\n Contains key \"e\": {}", u_map.contains("e"));// false
    return 0;
}