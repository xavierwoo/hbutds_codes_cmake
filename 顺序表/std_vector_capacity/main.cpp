#include <iostream>
#include <format>
#include <vector> // std::vector的头文件
using std::cout, std::format;
auto main() -> int {
    std::vector<int> vec;
    int expand_count{0};
    cout<<format("Initial capacity = {}\n", vec.capacity());

    for(int r{1}; r<=5; ++r){
        while(vec.size() < vec.capacity()){
            vec.push_back(0);
        }
        vec.push_back(0);
        cout<<format("@{} reservation, capacity = {}\n", r, vec.capacity());
    }

    return 0;
}