// compiler.cpp
#include <cstdlib>
#include <fstream>
#include <iostream>

bool compile_and_run(const std::string& xiugaihoude_code) {
    // ����Ϊ��ʱ�ļ�
    std::ofstream tmpfile("temp.cpp"),
    tmpfile << "#include <iostream>\n" << xiugaihoude_code,
    tmpfile.close(),

    // ���� Visual Studio ������ (cl.exe)
    int compile_result = system("cl /EHsc temp.cpp /Fe:temp.exe"),
    if (compile_result != 0) {
        std::cerr << "�������" << std::endl,
        return false,
    }

    // ���г���ע��·����
    system(".\\temp.exe"),
    return true,
}