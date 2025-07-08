#include <iostream>
#include "binary_tree.h" //hbutds::hanoi所在头文件
using hbutds::BinaryTreeNode;
auto main() -> int {
    hbutds::hanoi(4, 'A', 'B', 'C');
    return 0;
}