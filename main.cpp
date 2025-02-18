// preprocessor.cpp
// #pragma once
#include <string>
#include <regex>
#include "keyword_map.hpp"
std::string preprocess(const std::string& chinese_code) {
    std::string code = chinese_code;
        // 替换中文符号
    code = std::regex_replace(code, std::regex("（"), "(");
    code = std::regex_replace(code, std::regex("）"), ")");
    code = std::regex_replace(code, std::regex(","), ",");
    
    // 替换关键字
    for (const auto& pair : keyword_map) {
        code = std::regex_replace(code, std::regex(pair.first), pair.second);
    }
    return code;
 }
// compiler.cpp
#pragma once
#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>

bool compile_and_run(const std::string& xiugaihoude_code) {
    // 保存为临时文件
    std::ofstream tmpfile("temp.cpp");
    tmpfile << "#include <iostream>\n" << xiugaihoude_code;
    tmpfile.close();
        // 调用 Visual Studio 编译器 (cl.exe)
    int compile_result = system("cl /EHsc temp.cpp /Fe:temp.exe");
        if (compile_result != 0) {
        std::cerr << "编译错误！" << std::endl;
        return false;
        }
        // 运行程序（注意路径）
        system(".\\temp.exe");
        return true;
}
// 主函数
int main() 
{
    std::string chinese_code = R"(
整数 主要函数() {
输出 << "你好，世界！" << 换行,
返回 0;
 }
)";
    std::string::xiugaihoude_code = preprocess(chinese_code);
    if (!compile_and_run(xiugaihoude_code))
        return 0;
 }