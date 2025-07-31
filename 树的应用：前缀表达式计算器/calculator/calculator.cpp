#include "calculator.h"
#include <regex>
#include <sstream>
#include <iostream>
#include <ranges>
#include <format>
#include <cassert>

using std::string;
using std::cout, std::format;
using std::optional, std::nullopt;

hbutds::Calculator::Calculator(const string& expression){
    _parse(expression); // 生成语法树
    if(_is_grammar_correct){
        _result = _evaluate(_grammar_tree); // 解释语法树并求值
    }
}

void hbutds::Calculator::_tokenize(const string& expression){
    string spaces_added_expression // 在“(”和“)”两边插入空格
            = std::regex_replace(expression, 
                    std::regex("([()])"), " $1 ");
    
    std::istringstream iss {spaces_added_expression};
    string token;
    while (iss >> token) { // 依次读入词符，并存储到词符队列
        _token_queue.push(token);
    }
}

void hbutds::Calculator::_parse(const string& expression){
    _tokenize(expression); //词法分析生成词符队列
    _grammar_tree = _analyze(); //语法分析生成语法树
    if(!_token_queue.empty()){
        _is_grammar_correct = false;
        cout<<"The expression is invalid!\n";
    }
}

auto hbutds::Calculator::_analyze() -> TreeNode<string> {
    auto token {_token_queue.front()};_token_queue.pop();
    if(token ==  "("){
        return _analyze_expression();
    }else{
        return TreeNode<string>(token);
    }
}

auto hbutds::Calculator::_analyze_expression() -> TreeNode<string>{

    // oprt存储一个操作符
    auto oprt {_token_queue.front()}; _token_queue.pop();
    vector<TreeNode<string>> parameters;//oprt的操作数列表

    while(!_token_queue.empty() && _token_queue.front() != ")"){
        parameters.push_back(_analyze());
    }

    //表达式的最后一个词符一定是“)”
    if(_token_queue.empty()){
        cout<< "missing matched\")\"!\n";
        _is_grammar_correct = false;
    }else{
        _token_queue.pop();
    }

    //返回这个表达式的语法树
    return TreeNode<string>(oprt, parameters);
}

auto hbutds::Calculator::_evaluate(
        const TreeNode<std::string>& expr
) -> optional<double>{
    const auto& identifier {expr.data};
    const auto& parameters (expr.children);

    if(identifier == "+") return _calculate_add(parameters);
    else if(identifier == "-") return _calculate_sub(parameters);
    else if(identifier == "*") return _calculate_mul(parameters);
    else if(identifier == "/") return _calculate_div(parameters);
    else if(parameters.size() != 0){ // 遇到有参数表但不认识的操作符
        cout<<format("Unsupported operator: {}\n", identifier);
        _is_grammar_correct = false;
        return nullopt;
    }else{ // 识别操作数
        double value; 
        try{
            value = std::stod(identifier); //字符串转double
        }catch(std::invalid_argument const&){ //字符串不是double格式
            cout<<format("Invalid number: {}\n", identifier);
            _is_grammar_correct = false;
            return nullopt;
        }
        return optional(value);
    }
}

auto hbutds::Calculator::_calculate_add(
        const vector<TreeNode<string>>& parameters
) -> optional<double> {
    double result{0.0};
    for(const auto& operand : parameters){
        auto value {_evaluate(operand)};
        if(!value.has_value()) return nullopt;
        result += value.value();
    }
    return optional(result);
}

auto hbutds::Calculator::_calculate_sub(
        const vector<TreeNode<string>>& parameters
) -> optional<double> {
    if(parameters.size() == 0){//参数个数为0为语法错误
        cout<<"Operator \"-\" needs at least one parameter!\n";
        _is_grammar_correct = false;
        return nullopt;
    }
    auto result_opt {_evaluate(parameters[0])};
    if(! result_opt.has_value()) return nullopt;
    auto result {result_opt.value()};
    if(parameters.size() == 1){//单个参数情况，返回相反数
        return optional(0 - result);
    }else{//多参数时，返回第一个参数减去后面的参数
        for(int i{1}; i<parameters.size(); ++i){
            auto value{_evaluate(parameters[i])};
            if(!value.has_value()) return nullopt;
            result -= value.value();
        }
    }
    return optional(result);
}

auto hbutds::Calculator::_calculate_mul(
        const vector<TreeNode<string>>& parameters
) -> optional<double> {
    double result{1.0};
    for(const auto& expr : parameters){
        auto value {_evaluate(expr)};
        if(!value.has_value()) return nullopt;
        result *= value.value();
    }
    return optional(result);
}


auto hbutds::Calculator::_calculate_div(
        const vector<TreeNode<string>>& parameters
) -> optional<double> {
    if(parameters.size() == 0){ // 参数表为空时，语法错误
        cout<<"Operator \"/\" needs at least one parameter!\n";
        _is_grammar_correct = false;
        return nullopt;
    }
    auto result_opt {_evaluate(parameters[0])};
    if(! result_opt.has_value()) return nullopt;
    auto result {result_opt.value()};
    if(parameters.size() == 1){ // 只有一个参数，返回其倒数
        return optional(1/result);
    }else{ // 多个参数时，返回第一个参数除以后面所有参数
        for(int i{1}; i<parameters.size(); ++i){
            auto value {_evaluate(parameters[i])};
            if(!value.has_value()) return nullopt;
            result /= value.value();
        }
    }
    return optional(result);
}

auto hbutds::Calculator::get_result() -> double{
    assert(_is_grammar_correct);
    return _result.value();
}