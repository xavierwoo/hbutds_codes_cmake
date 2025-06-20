#include <iostream>
#include <format>
using std::cout, std::format;
struct Rectangle{
    double length = 1.0;
    double width = 1.0;
    Rectangle(){};
    Rectangle(double e): length(e), width(e){}
    Rectangle(double l, double w): length(l), width(w){}
};

int main(){
    Rectangle rect1; 
    cout<<format("rect1 length={}, wdith={}\n", rect1.length, rect1.width);
    Rectangle rect2(2.0); 
    cout<<format("rect2 length={}, wdith={}\n", rect2.length, rect2.width); 
    Rectangle rect3(2.3, 2.5); 
    cout<<format("rect3 length={}, wdith={}\n", rect3.length, rect3.width); 
    return 0;
}