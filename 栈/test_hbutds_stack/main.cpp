
#include <iostream>
#include <format>
#include "stack.h"
#include "algorithm.h"
using std::cout, std::format;
auto main() -> int {
    hbutds::stack_works();

    cout<<format("{}\n", hbutds::check_brackets_matching("(a)b[c]d{e}")); //True
    cout<<format("{}\n", hbutds::check_brackets_matching("a[(b)c]{de}")); //True
    cout<<format("{}\n", hbutds::check_brackets_matching("{ab(c)d]e"));   //False
    return 0;
}