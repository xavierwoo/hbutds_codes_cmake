#include "tree.h" // hbutds::tree_bfs所在头文件
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
    hbutds::tree_bfs(tree);
    return 0; // 输出 A B C D E F G
}