#include <iostream>
using std::cout;

template<typename T>
T add(T a, T b){
    return a + b;
}

int main(){
    cout<< add(1,3) <<"\n";
    cout<< add(1.2, 1.3) <<"\n";
    cout<< add<double>(1, 2.3) <<"\n"; // add(1,2.3)无法通过模板生成对应函数
    return 0;
}