#include <iostream>
#include <utility>
#include <format>
#include "array.h"
using std::cout, std::format;
struct A{
    A(){cout<<"Default constructor\n";}
    ~A(){cout<<"Deconstructor\n";}
    A(const A&){cout<<"Copy constructor\n";}
    A(A&&){cout<<"Move copy constructor\n";}
    auto operator=(const A&)->A&{
        cout<<"= operator\n";
        return *this;
    }
    auto operator=(A&&) ->A&{
        cout<<"Move = operator\n";
        return *this;
    }
};
auto main() -> int {
    hbutds::array<A, 3> arr0;
    auto arr1{arr0};
    auto arr2{std::move(arr0)};
    hbutds::array<A, 3> arr3;
    arr3 = arr1;
    arr3 = std::move(arr1);
    cout<<"Check the output to see if five-rule is good\n";
}