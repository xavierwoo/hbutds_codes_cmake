#include "binary_tree.h" //hbutds::binary_tree_print所在头文件
using hbutds::BinaryTreeNode;
auto main() -> int {
    BinaryTreeNode<char> binary_tree('R',
        new BinaryTreeNode<char>('A',
            new BinaryTreeNode<char>('C'),
            new BinaryTreeNode<char>('D',
                new BinaryTreeNode<char>('G'),
                new BinaryTreeNode<char>('H')
            )
        ),
        new BinaryTreeNode<char>('B',
            new BinaryTreeNode<char>('E'),
            new BinaryTreeNode<char>('F')
        )
    );
    hbutds::binary_tree_print(&binary_tree, 60);
    return 0;
}