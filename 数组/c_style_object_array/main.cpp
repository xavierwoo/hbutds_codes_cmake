#include <iostream>	
struct A{
    A(){std::cout<<"Constructor!\n";}
    ~A(){std::cout<<"Destructor!\n";}
};
auto main() -> int {
    A arr[3]; // 输出三次 "Constructor!\n"
    return 0; // 输出三次 "Destructor!\n"
}
