#include <iostream>
#include "binary_tree.h"
#include "vector.h"
using hbutds::vector;
using hbutds::BinaryTreeNode;

auto main() -> int {
    vector<double> data {7, 5, 2, 4};

    auto tree {hbutds::make_huffman_tree(data)};

    //在此处创建断点，使用debug查看tree的内容
    return 0;
}