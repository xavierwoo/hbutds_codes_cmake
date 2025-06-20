#include <iostream>
struct A{
    int* data;
    A():data(new int[100]){}
    ~A(){delete[] data;}
    auto operator=(const A& o) -> A& {
        std::cout<<"= operator\n";
        for(int i{0}; i<100; i++) data[i] = o.data[i]; 
        return *this;
    }
};
auto providing() -> A {
    A aa;
    return aa;
}
auto main() -> int {
    A a1, a2, a3;
    a2 = a1; // 调用 operator=()
    a3 = providing(); // 调用 operator=()
    return 0;
}