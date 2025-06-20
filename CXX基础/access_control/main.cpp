#include <iostream>
#include <format>
using std::cout, std::format;
struct Rectangle{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w): length(l), width(w){}
    double get_length(){return length;}
    double get_width(){return width;}
};

int main(){
    Rectangle rect(2.2, 1.3);
    // rect.length = 3.0; //编译错误，length是私有成员
    cout<<format("length={}, width={}\n", rect.get_length(), rect.get_width());
    return 0;
}