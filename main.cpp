// preprocessor.cpp
// #pragma once
#include <string>
#include <regex>
#include "keyword_map.hpp"
std::string preprocess(const std::string& chinese_code) {
    std::string code = chinese_code;
        // �滻���ķ���
    code = std::regex_replace(code, std::regex("��"), "(");
    code = std::regex_replace(code, std::regex("��"), ")");
    code = std::regex_replace(code, std::regex(","), ",");
    
    // �滻�ؼ���
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
    // ����Ϊ��ʱ�ļ�
    std::ofstream tmpfile("temp.cpp");
    tmpfile << "#include <iostream>\n" << xiugaihoude_code;
    tmpfile.close();
        // ���� Visual Studio ������ (cl.exe)
    int compile_result = system("cl /EHsc temp.cpp /Fe:temp.exe");
        if (compile_result != 0) {
        std::cerr << "�������" << std::endl;
        return false;
        }
        // ���г���ע��·����
        system(".\\temp.exe");
        return true;
}
// ������
int main() 
{
    std::string chinese_code = R"(
���� ��Ҫ����() {
��� << "��ã����磡" << ����,
���� 0;
 }
)";
    std::string::xiugaihoude_code = preprocess(chinese_code);
    if (!compile_and_run(xiugaihoude_code))
        return 0;
 }