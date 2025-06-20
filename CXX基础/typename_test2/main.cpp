#include <iostream>
template<typename T>
void func(){
    typename T::testing t;
    t.data = 1;
    std::cout<<"testing is a type.\n";
}
struct A{
    struct testing{int data;};
};
int main(){
    func<A>(); 
    return 0;
}