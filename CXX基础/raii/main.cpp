#include <iostream>
#include <format>
using std::cout, std::format;
int next_id = 0;
struct Arr{
    int* data;
    int id;
    Arr():id(next_id++){
        data = new int[10];
        cout<<format("Arr #{} was created!\n", id);
    }
    ~Arr(){
        delete data;
        cout<<format("Arr #{} has been deleted!\n", id);
    }
};
struct A{
    Arr arr;
    int id;
    A(): id(next_id++){
        cout<<format("A #{} was created!\n", id);
    }
    ~A(){
        cout<<format("A #{} has been deleted!\n", id);
    }
};
void func(){
    cout<<"func() starts!\n";
    Arr arr2;
    cout<<"func() ends.\n";
}
int main(){
    cout<<"Program starts!\n";
    A a;
    func();
    cout<<"Program ends.\n";
    return 0;
}