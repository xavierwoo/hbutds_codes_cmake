#include <iostream>
#include "binary_tree.h" 
using hbutds::BinaryTreeNode;
using std::cout;
auto main() -> int {
    BinaryTreeNode<char> binary_tree('R',
        new BinaryTreeNode<char>('A'),
        new BinaryTreeNode<char>('B',
            nullptr,
            new BinaryTreeNode<char>('F')
        )
    );
    cout<<binary_tree_get_depth(&binary_tree);//输出3
    return 0; 
}