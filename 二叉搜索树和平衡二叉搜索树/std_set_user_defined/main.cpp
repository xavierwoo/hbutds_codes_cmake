#include <iostream>
#include <format>
#include <set> // std::set的头文件
using std::cout, std::format;
struct A{
    int data1, data2;
};
struct Comparator{
    auto operator()(const A& a, const A& b)const -> bool{
        if(a.data1 < b.data1){return true;}
        else if(a.data1 > b.data1){return false;}
        else{return a.data2 < b.data2;}
    };
};
auto main() -> int {
    std::set<A, Comparator> s{A{2,1}, A{1,3}, A{1,2}};
    for(auto a : s){
        cout<<format("({},{}) ", a.data1, a.data2);
    }//输出：(1,2) (1,3) (2,1)
    return 0;
}