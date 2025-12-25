#include <iostream>
#include <format>
#include <array> // std::array的头文件
using std::cout, std::format;

struct A
  {
  int foo;
  double bar;
  };

  struct Aarray
{
   A data[2];  //data is an internal array
};

auto main() -> int {
    std::array<std::array<int, 3>, 2> arr_2d
            {1,2,3, 4,5,6};
    for(int i{0}; i<2; ++i){
        for(int j{0}; j<3; ++j){
            cout<<format("{} ", arr_2d[i][j]);
        }
        cout<<"\n";
    } 

    return 0;
}