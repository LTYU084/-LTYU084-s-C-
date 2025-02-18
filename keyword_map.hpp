// keyword_map.hpp
#include <unordered_map>
#include <string>  // 添加<string>头文件
//将英文关键词替换成中文
const std::unordered_map<std::string, std::string> keyword_map = {
    // ----- 基础类型 -----
    {"空", "void"},          {"布尔", "bool"},
    {"字符", "char"},        {"整型", "int"},
    {"浮点", "float"},       {"双浮点", "double"},
    {"长整型", "long"},      {"短整型", "short"},
    {"无符号", "unsigned"},  {"有符号", "signed"},

    // ----- 流程控制 -----
    {"若", "if"},            {"否则", "else"},
    {"循环", "while"},       {"对于", "for"},
    {"切换", "switch"},      {"分支", "case"},
    {"默认", "default"},     {"中断", "break"},
    {"继续", "continue"},    {"返回", "return"},
    {"跳转", "goto"},

    // ----- 类与对象 -----
    {"类", "class"},         {"结构体", "struct"},
    {"联合体", "union"},     {"枚举", "enum"},
    {"模板", "template"},    {"命名空间", "namespace"},
    {"友元", "friend"},      {"虚函数", "virtual"},
    {"重写", "override"},    {"终结", "final"},

    // ----- 内存管理 -----
    {"新建", "new"},         {"删除", "delete"},
    {"常量", "const"},       {"常量表达式", "constexpr"},
    {"静态", "static"},      {"线程局部", "thread_local"},
    {"可变", "mutable"},     {"对齐", "alignas"},

    // ----- 异常处理 -----
    {"尝试", "try"},         {"捕获", "catch"},
    {"抛出", "throw"},       {"无异常", "noexcept"},

    // ----- 类型操作 -----
    {"自动", "auto"},        {"声明类型", "decltype"},
    {"类型名", "typename"},  {"类型定义", "typedef"},
    {"使用", "using"},       {"动态转换", "dynamic_cast"},
    {"静态转换", "static_cast"}, {"重解释转换", "reinterpret_cast"},

    // ----- 现代 C++ -----
    {"空指针", "nullptr"},   {"概念", "concept"},
    {"要求", "requires"},    {"协程", "co_await"},
    {"模块", "module"},

    // ----- 模板与运算符 -----
    {"模板参数", "template<>"},  {"约束", "requires"},
    {"三向比较", "<=>"},

    // ----- Lambda 符号 -----
    {"捕获", "[]"},          {"可变", "mutable"},
    {"异常说明", "noexcept"}, {"尾置返回", "->"},

    // ----- 预处理指令 -----
    {"包含", "#include"},    {"定义宏", "#define"},
    {"条件编译", "#if"},     {"结束条件", "#endif"},
    {"错误提示", "#error"}
};  // <- 注意结尾分号