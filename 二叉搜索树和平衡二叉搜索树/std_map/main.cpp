#include <iostream>
#include <format>
#include <string>
#include <map> // std::set的头文件
using std::cout, std::format;
auto main() -> int {
    std::map<std::string, int> m{{"apple", 1}, {"pear", 2}, {"banana", 3}};
    m.insert({"orange", 3});
    m.insert({"apple", 0});
    for(auto& [fruit, value] : m){
        cout<<format("{}:{} ", fruit, value);
    }// 输出 apple:1 banana:3 orange:3 pear:2 %
    auto it {m.find("banana")};
    cout<<it->second;
    return 0;
}