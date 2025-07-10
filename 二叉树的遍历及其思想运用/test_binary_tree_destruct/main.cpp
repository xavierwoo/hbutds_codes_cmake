#include <iostream>
#include <format>
#include "binary_tree.h" 
using hbutds::BinaryTreeNode;
using std::cout, std::format;
struct A{
    char data;
    A(char d):data(d){}
    ~A(){cout<<format("{} was destructed.\n", data);}
};
auto main() -> int {
    BinaryTreeNode<A> binary_tree(A('R'),
        new BinaryTreeNode<A>(A('A')),
        new BinaryTreeNode<A>(A('B'))
    );
    return 0; 
}