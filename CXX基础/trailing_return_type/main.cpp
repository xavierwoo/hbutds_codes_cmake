#include <iostream>

double fraction(int a, int b){
    return (double)a / (double)b;
}

// double (*get_function())(int, int){
auto get_function() -> double(*)(int,int){
    return &fraction;
}

int main(){
    std::cout<< get_function()(1,2) <<std::endl; //输出 0.5
    return 0;
}