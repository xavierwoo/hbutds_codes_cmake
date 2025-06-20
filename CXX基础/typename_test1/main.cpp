#include <iostream>
template<typename T>
void func(){
    T::testing();
}
struct A{
    static void testing(){std::cout<<"testing is a function.\n";}
};
int main(){
    func<A>(); //输出 testing is a function.
    return 0;
}