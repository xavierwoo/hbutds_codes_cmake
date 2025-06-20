#include <iostream>
#include <format>
#include <queue> // std::queue头文件
using std::cout, std::format;
auto main() ->int {
    std::queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);

    while(!que.empty()){
        int e {que.front()};
        cout<<format("{} ", e);
        que.pop();
    } // 输出 1 2 3
    return 0;
}