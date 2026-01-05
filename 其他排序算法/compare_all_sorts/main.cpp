#include "algorithm.h" //排序算法所在头文件
#include <iostream>
#include <format>
#include <vector>
#include <numeric> //使用std::iota函数
#include <ctime>
#include <algorithm> //std::sort std::stable_sort 所在头文件
#include <ranges>
#include <random> //使用 std::mt19937随机数发生器
#include <functional> //使用std::function类型
using std::cout, std::format, std::flush;
using SeqList = std::vector<int>;
void test_sort(SeqList& data, std::function<void(SeqList&)>sort_func){
    std::mt19937 die(0);
    std::ranges::shuffle(data, die);
    auto start_time {clock()};
    sort_func(data);
    cout<<format("Using {} seconds\n", 
            static_cast<double>(clock() - start_time)/CLOCKS_PER_SEC);
}
auto main() -> int {
    SeqList data(70000);
    std::iota(data.begin(), data.end(), 1);

    cout<<"Testing selection sort...\t"<<flush;
    test_sort(data, hbutds::selection_sort<SeqList>);
    cout<<"Testing heap sort...\t\t"<<flush;
    test_sort(data, hbutds::heap_sort<SeqList>);
    cout<<"Testing bubble sort...\t\t"<<flush;
    test_sort(data, hbutds::bubble_sort<SeqList>);
    cout<<"Testing quick sort...\t\t"<<flush;
    test_sort(data, hbutds::quick_sort<SeqList>);
    cout<<"Testing insertion sort...\t"<<flush;
    test_sort(data, hbutds::insertion_sort<SeqList>);
    cout<<"Testing shell sort...\t\t"<<flush;
    test_sort(data, hbutds::shell_sort<SeqList>);
    cout<<"Testing merge sort...\t\t"<<flush;
    test_sort(data, hbutds::merge_sort<SeqList>);
    cout<<"Testing std::sort...\t\t"<<flush;
    test_sort(data, std::ranges::sort);
    cout<<"Testing std::stable_sort...\t"<<flush;
    test_sort(data, std::ranges::stable_sort);
    return 0;
}