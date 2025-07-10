#include <iostream>
void test_recursion(int i){
    std::cout<<i<<"\n";
    test_recursion(i+1);
}
auto main()->int{
    test_recursion(0);
    return 0;
}