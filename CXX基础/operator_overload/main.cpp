#include <iostream>
#include <format>
using std::cout, std::format;
struct Fraction{
    int numerator;
    int denominator;
    Fraction(int n, int d): numerator(n), denominator(d){}
    Fraction operator+(Fraction o){
        return Fraction(numerator * o.denominator + o.numerator * denominator,
                denominator * o.denominator);
    }
};
int main(){
    Fraction a(1, 2); // 1/2
    Fraction b(2, 3); // 2/3
    Fraction c = a + b; // c = a.operator+(b);
    cout<<format("{}/{}\n", c.numerator, c.denominator); // 7/6
    return 0;
}