// keyword_map.hpp
#include <unordered_map>
#include <string>  // ���<string>ͷ�ļ�
//��Ӣ�Ĺؼ����滻������
const std::unordered_map<std::string, std::string> keyword_map = {
    // ----- �������� -----
    {"��", "void"},          {"����", "bool"},
    {"�ַ�", "char"},        {"����", "int"},
    {"����", "float"},       {"˫����", "double"},
    {"������", "long"},      {"������", "short"},
    {"�޷���", "unsigned"},  {"�з���", "signed"},

    // ----- ���̿��� -----
    {"��", "if"},            {"����", "else"},
    {"ѭ��", "while"},       {"����", "for"},
    {"�л�", "switch"},      {"��֧", "case"},
    {"Ĭ��", "default"},     {"�ж�", "break"},
    {"����", "continue"},    {"����", "return"},
    {"��ת", "goto"},

    // ----- ������� -----
    {"��", "class"},         {"�ṹ��", "struct"},
    {"������", "union"},     {"ö��", "enum"},
    {"ģ��", "template"},    {"�����ռ�", "namespace"},
    {"��Ԫ", "friend"},      {"�麯��", "virtual"},
    {"��д", "override"},    {"�ս�", "final"},

    // ----- �ڴ���� -----
    {"�½�", "new"},         {"ɾ��", "delete"},
    {"����", "const"},       {"�������ʽ", "constexpr"},
    {"��̬", "static"},      {"�ֲ߳̾�", "thread_local"},
    {"�ɱ�", "mutable"},     {"����", "alignas"},

    // ----- �쳣���� -----
    {"����", "try"},         {"����", "catch"},
    {"�׳�", "throw"},       {"���쳣", "noexcept"},

    // ----- ���Ͳ��� -----
    {"�Զ�", "auto"},        {"��������", "decltype"},
    {"������", "typename"},  {"���Ͷ���", "typedef"},
    {"ʹ��", "using"},       {"��̬ת��", "dynamic_cast"},
    {"��̬ת��", "static_cast"}, {"�ؽ���ת��", "reinterpret_cast"},

    // ----- �ִ� C++ -----
    {"��ָ��", "nullptr"},   {"����", "concept"},
    {"Ҫ��", "requires"},    {"Э��", "co_await"},
    {"ģ��", "module"},

    // ----- ģ��������� -----
    {"ģ�����", "template<>"},  {"Լ��", "requires"},
    {"����Ƚ�", "<=>"},

    // ----- Lambda ���� -----
    {"����", "[]"},          {"�ɱ�", "mutable"},
    {"�쳣˵��", "noexcept"}, {"β�÷���", "->"},

    // ----- Ԥ����ָ�� -----
    {"����", "#include"},    {"�����", "#define"},
    {"��������", "#if"},     {"��������", "#endif"},
    {"������ʾ", "#error"}
};  // <- ע���β�ֺ�