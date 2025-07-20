#include <iostream>
#include "tree.h" // hbutds::EightQueenSolver所在头文件
auto main() -> int {
    hbutds::EightQueenSolver solver;
    solver.solve();
    solver.print();
    return 0; //输出共92种解决方案
}