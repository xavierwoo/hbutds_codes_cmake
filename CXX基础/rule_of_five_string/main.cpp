#include <iostream>
#include <string>
#include <format>
#include <utility>
using std::cout, std::string, std::format;
int main(){
    string s1{"testing"};
    string s2{s1}; // 调用 拷贝构造函数
    string s3;
    s3 = s1; // 调用 赋值操作符
    cout<<format("s1={}, s2={}, s3={}\n", s1, s2, s3); // 三个字符串内容相同

    string s4{std::move(s1)}; //调用 移动拷贝构造函数
    cout<<format("s1={}, s4={}\n", s1, s4); // s1变为空串

    string s5;
    s5 = std::move(s2); // 调用 移动赋值操作符
    cout<<format("s2={}, s5={}\n", s2, s5); // s2变为空串
    return 0;
}