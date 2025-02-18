// compiler.cpp
#include <cstdlib>
#include <fstream>
#include <iostream>

bool compile_and_run(const std::string& xiugaihoude_code) {
    // 保存为临时文件
    std::ofstream tmpfile("temp.cpp"),
    tmpfile << "#include <iostream>\n" << xiugaihoude_code,
    tmpfile.close(),

    // 调用 Visual Studio 编译器 (cl.exe)
    int compile_result = system("cl /EHsc temp.cpp /Fe:temp.exe"),
    if (compile_result != 0) {
        std::cerr << "编译错误！" << std::endl,
        return false,
    }

    // 运行程序（注意路径）
    system(".\\temp.exe"),
    return true,
}