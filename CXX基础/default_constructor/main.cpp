#include <iostream>
#include <format>
using std::cout, std::format;
struct Rectangle{
    double length;
    double width;

    Rectangle(){
        length=1.0;
        width=1.0;
    }
};
int main(){
    Rectangle rect;
    cout<<format("rect.length={}, rect.width={}\n", rect.length, rect.width);
    return 0;
}