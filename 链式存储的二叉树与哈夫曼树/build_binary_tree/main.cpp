#include <iostream>
#include "binary_tree.h"

using hbutds::BinaryTreeNode;

auto main() -> int {
    BinaryTreeNode<char> binary_tree('A',
        new BinaryTreeNode<char>('B',
            new BinaryTreeNode<char>('D'),
            nullptr
        ),
        new BinaryTreeNode<char>('C',
            new BinaryTreeNode<char>('E'),
            new BinaryTreeNode<char>('F')
        )
    );

    //在此处创建断点，使用debug查看bianry_tree的内容
    return 0;
}