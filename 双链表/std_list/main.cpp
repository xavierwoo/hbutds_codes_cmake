#include<iostream>
#include<list> // std::list的头文件
#include<format>
using std::cout, std::format;
auto main() -> int {
    std::list<int> lst{1,2,3};

    for(int e : lst){
        cout<<format("{} ", e);
    } // 输出 1 2 3

    lst.insert(lst.end(), 10); //在表末尾插入元素
    lst.erase(lst.begin()); //删除首元素

    cout<<"\n Reversed traveral:";
    auto it{lst.end()};
    do{ // 输出 10 3 2
        --it;
        cout<<format("{} ", *it);
    }while(it != lst.begin());

    return 0;
}