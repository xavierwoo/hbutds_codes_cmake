#include <iostream>
#include "tree.h" // hbutds::tree_dfs_pre_order_iterative所在头文件
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
    hbutds::tree_dfs_pre_order_iterative(tree);
    return 0; // 输出 A D G C B F E
}