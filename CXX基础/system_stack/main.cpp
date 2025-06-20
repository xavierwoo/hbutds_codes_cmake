#include <iostream>
#include <format>
using std::cout, std::format;
int next_id = 0;

struct A{
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
    A a3;
    cout<<"func() ends.\n";
}
int main(){
    cout<<"Program starts!\n";
    A a0;
    for(int i=0; i<2; ++i){
        cout<<format("loop i={} starts!\n", i);
        A a_loop;
        cout<<format("loop i={} ends.\n", i);
    }
    func();
    cout<<"Program ends.\n";
    
    return 0;
}