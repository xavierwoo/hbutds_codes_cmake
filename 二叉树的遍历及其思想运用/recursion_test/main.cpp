#include <iostream>
void test_recursion(int depth){
    std::cout<<depth<<"\n";
    test_recursion(depth+1);
}
auto main()->int{
    test_recursion(0);
    return 0;
}