#include <iostream>
#include <format>
#include <vector>
#include <algorithm> //std::sort所在头文件
using std::cout, std::format;
struct A{
    int data1;
    int data2;
};
struct Comparator{//按照data1升序，data2降序排序
    auto operator()(const A& a1, const A& a2) const -> bool {
        if(a1.data1 < a2.data1) {return true;}
        if(a1.data1 > a2.data1) {return false;}
        return a1.data2 > a2.data2; 
    }
};
auto main() -> int {
    std::vector<A> data{{2, 10}, {1, 20}, {2, 30}, {1, 40}};
    std::sort(data.begin(), data.end(), Comparator());
    for(auto e : data){
        cout<<format("({},{}) ", e.data1, e.data2);
    } // (1,40) (1,20) (2,30) (2,10) 
    return 0;
}