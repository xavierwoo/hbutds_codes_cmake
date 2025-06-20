#include <iostream>
using std::cout;
int add(int a, int b){
    cout<<"int version a+b=";
    return a + b;
}
double add(double a, double b){
    cout<<"double version a+b=";
    return a+b;
}
int main(){
    cout<< add(1,3) <<"\n";
    cout<< add(1.2, 1.3) <<"\n";
    return 0;
}