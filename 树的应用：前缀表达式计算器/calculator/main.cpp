#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <format>
#include "calculator.h"

using std::cout, std::format;

auto read_file(const std::string& filename) -> std::string {
    std::ifstream file(filename);
    if (!file) {
        cout<<format("Could not open the file: {}", filename);
        exit(-1);
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

auto main(int argc, char* argv[]) -> int {
    auto expression {read_file(argv[1])};
    hbutds::Calculator calc(expression);
    if(calc.is_grammar_correct()){
        cout<<format("Answer: {}\n", calc.get_result());
    }else{
        cout<<"Incorrect expression!\n";
    }
    return 0;
}