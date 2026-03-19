#include <iostream>
#include "vector.h"
using std::cout;
struct A{
    int* data;
    A(){ data = new int[10]; }
    ~A(){ delete[] data; }
    A(const A& o){
        cout<<"Copy constructor\n";
        data = new int[10];
        for(int i{0}; i<10; ++i){ data[i] = o.data[i]; }
    }
    auto operator=(const A& o) -> A&{
        cout<<"Assignment\n";
        delete[] data;
        data = new int[10];
        for(int i{0}; i<10; ++i){ data[i] = o.data[i]; } 
        return *this;
    }
};
auto main() -> int {
    hbutds::vector<A> vec{A(), A()};
    cout<<"testing reserve:\n";
    vec.reserve(3);
    cout<<"testing insert\n";
    vec.insert(vec.begin(), A());
    cout<<"testing erase\n";
    vec.erase(vec.begin());
    return 0;
}