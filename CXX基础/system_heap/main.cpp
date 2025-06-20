#include <iostream>
#include <cstdlib>
#include <format>
using std::cout, std::format;
int next_id = 0;
struct A{
    int id;
    A(): id(next_id++) { 
        cout<<format("A #{} was created!\n", id); 
    }
    ~A(){ 
        cout<<format("A #{} has been deleted!\n", id); 
    }
};
void func(){
    cout<<"func() starts!\n";
    A* pA_func = new A();
    cout<<"func() ends.\n";
}
int main(){
    cout<<"Program starts!\nusing new:\n";
    A* pA_new = new A();
    cout<<"using std::malloc:\n";
    A* pA_malloc = (A*)std::malloc(sizeof(A));
    cout<<"Allocated two pieces of memory in system heap.\n";
    func();

    cout<<"using delete:\n";
    delete pA_new;
    cout<<"using std::free\n";
    std::free(pA_malloc);
    cout<<"Program ends.\n";
    return 0;
}