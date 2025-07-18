#include <iostream>
#include "tree.h"

using hbutds::TreeNode;

auto main() -> int {
    TreeNode<char> tree('A', {
        TreeNode<char>('B', {
            TreeNode<char>('E'),
            TreeNode<char>('F')
        }),
        TreeNode<char>('C'),
        TreeNode<char>('D', {
            TreeNode<char>('G')
        })
    });

    //在此处创建断点，使用debug查看tree的内容
    return 0;
}