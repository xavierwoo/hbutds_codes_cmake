#include <iostream>
#include <format>
using std::cout, std::format;
int main(){
    int a{1};

    int& b{a};
    double& c = (double)a;

    cout<<format("b={}\n", b); // b=1
    b = 3;
    cout<<format("a={}\n", a); // a=3
    a = 4;
    cout<<format("b={}\n", b); // b=3
    return 0;
}