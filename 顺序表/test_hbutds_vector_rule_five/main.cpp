#include <iostream>
#include <format>
#include <utility>
#include "vector.h"
using std::cout, std::format, hbutds::vector;
auto main() -> int {
    vector<int> vec0{1,2,3,4};
    vector<int> vec1(vec0);
    for(int e : vec0){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4
    cout<<"\n";
    for(int e : vec1){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4
    cout<<"\n";

    vector<int> vec2(std::move(vec1));
    cout<<format("vec1.size() = {}\n", vec1.size());// 0
    for(int e : vec2){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4
    cout<<"\n";

    vec2.push_back(10);
    vec2 = vec0;
    cout<<format("vec1.size() = {}\n", vec0.size());// 4
    for(int e : vec2){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4
    cout<<"\n";

    vec2.push_back(10);
    vec2 = std::move(vec0);
    cout<<format("vec1.size() = {}\n", vec0.size());// 0
    for(int e : vec2){
        cout<<format("{} ", e);
    } // 输出 1 2 3 4
    cout<<"\n";
    return 0;
}