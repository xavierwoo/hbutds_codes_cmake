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

    hbutds::tree_dfs_pre_order_iterative(tree);
    return 0;
}