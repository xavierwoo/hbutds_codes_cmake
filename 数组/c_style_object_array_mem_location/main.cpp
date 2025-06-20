#include <iostream>
using std::cout;
struct A{
    A(){cout<<"Constructor!\n";}
    ~A(){cout<<"Destructor!\n";}
};
auto main() -> int {
    cout<<"Program starts!\n";
    A* p_arr{nullptr};
    if(true){
        cout<<"\tInside if\n";
        A arr[3]; // 占用系统栈内存
        cout<<"\tCreate heap array\n";
        p_arr = new A[2]; // 占用系统堆内存
    }
    cout<<"Outside if\n";
    delete[] p_arr;
    return 0;
}
