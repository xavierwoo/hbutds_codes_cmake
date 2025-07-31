#ifndef HBUTDS_CALCULATOR_H
#define HBUTDS_CALCULATOR_H

#include "tree.h"
#include "queue.h"
#include "vector.h"
#include <string>
#include <optional>

namespace hbutds{
    struct Calculator{
    private:
        TreeNode<std::string> _grammar_tree; //语法树
        queue<std::string> _token_queue; //存储词符流
        std::optional<double> _result {std::nullopt}; //存储最终结果
        bool _is_grammar_correct {true}; //语法是否正确标记

        void _parse(const std::string&); //语法分析主函数
        void _tokenize(const std::string&); //词法分析函数
        auto _analyze() -> TreeNode<std::string>; //分析词符
        auto _analyze_expression() -> TreeNode<std::string>; //分析表达式

        auto _evaluate(
                const TreeNode<std::string>&
        ) -> std::optional<double>; // 解释语法树

        auto _calculate_add(
                const vector<TreeNode<std::string>>&
        ) -> std::optional<double>; // 解释加法运算

        auto _calculate_sub(
                const vector<TreeNode<std::string>>&
        ) -> std::optional<double>; // 解释减法运算

        auto _calculate_mul(
                const vector<TreeNode<std::string>>&
        ) -> std::optional<double>; // 解释乘法运算

        auto _calculate_div(
                const vector<TreeNode<std::string>>&
        ) -> std::optional<double>; // 解释除法运算

    public:
        Calculator(const std::string&);
        auto is_grammar_correct() -> bool{return _is_grammar_correct;}
        auto get_result() -> double;
    };
}

#endif