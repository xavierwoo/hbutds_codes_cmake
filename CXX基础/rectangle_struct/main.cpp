#include <iostream>
#include <format>
using std::cout, std::format;

struct Rectangle{
    double length;
    double width;

    double area(){
        return length * width;
    }
};

int main(){
    Rectangle rec1;
    rec1.length = 3.1;
    rec1.width = 2.2;
    cout<<format("The area of rec1 is {}.\n", rec1.area());// 6.82 

    Rectangle rec2;
    rec2.length = 3.3;
    rec2.width = 2.4;
    cout<<format("The area of rec2 is {}.\n", rec2.area());// 7.92
    return 0;
}