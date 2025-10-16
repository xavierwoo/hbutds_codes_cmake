#include <iostream>
#include <format>
#include <unordered_set>
using std::cout, std::format;

struct A{ int data1; int data2;};

struct MyHash{
    auto operator()(const A& a) const -> unsigned int{
        return a.data1 * 31 + a.data2;
    }
};
struct MyEqual{
    auto operator()(const A& a1, const A& a2) const -> bool{
        return a1.data1 == a2.data1 && a1.data2 == a2.data2;
    }
};

auto main() ->int {
    std::unordered_set<A, MyHash, MyEqual> u_set;
    u_set.insert({1, 0});
    u_set.insert({0, 31});
    u_set.insert({2,1});
    for(auto& [data1, data2]: u_set){
        cout<<format("({}, {}) ", data1, data2);
    }

    return 0;
}