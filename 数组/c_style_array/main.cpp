#include <iostream>
#include <format>
using std::cout, std::format;
void print_arr(const int* const arr, const unsigned int n){
    for(int i{0}; i<n; ++i){
        cout<<format("{}\n", arr[i]);
    }
}
auto main() -> int {
    int arr[3];
    arr[0] = 0;
    arr[1] = 10;
    arr[2] = 20;
	
    print_arr(arr, 3);
    return 0;
}