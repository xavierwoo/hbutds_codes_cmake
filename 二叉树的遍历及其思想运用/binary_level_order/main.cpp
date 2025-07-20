#include "binary_tree.h" //hbutds::binary_tree_level_order所在头文件
using hbutds::BinaryTreeNode;
auto main() -> int {
    BinaryTreeNode<char> binary_tree('R',
        new BinaryTreeNode<char>('A',
            new BinaryTreeNode<char>('C'),
            new BinaryTreeNode<char>('D')
        ),
        new BinaryTreeNode<char>('B',
            new BinaryTreeNode<char>('E'),
            new BinaryTreeNode<char>('F')
        )
    );
    hbutds::binary_tree_level_order(&binary_tree);
    return 0; // 输出 R A B C D E F 
}