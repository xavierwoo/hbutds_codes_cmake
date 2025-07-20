#include <iostream>
#include "tree.h" // hbutds::tree_dfs_post_order_recursive所在头文件
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
    hbutds::tree_dfs_post_order_recursive(tree);
    return 0; // 输出 E F B C G D A
}