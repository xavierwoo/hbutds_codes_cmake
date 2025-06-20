#include <iostream>
#include <string>
#include <cstdio>
using std::cout;
int main(){
    std::string data;

    cout<<"Input a string:";
    std::cin>>data;

    cout<<data<<"\n";
    cout<<"Length:"<<data.length()<<"\n";

    const char* cstr = data.c_str();
    std::printf("Conver to C string: %s\n", cstr);

    return 0;
}