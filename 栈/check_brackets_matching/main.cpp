#include <iostream>
#include <format>
#include "algorithm.h"
using std::cout, std::format;
using hbutds::check_brackets_matching;
auto main() -> int {
    cout<<format("{}\n", check_brackets_matching("(a)b[c]d{e}")); //True
    cout<<format("{}\n", check_brackets_matching("a[(b)c]{de}")); //True
    cout<<format("{}\n", check_brackets_matching("{ab(c)d]e"));   //False
    return 0;
}