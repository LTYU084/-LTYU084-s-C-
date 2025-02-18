// preprocessor.cpp
#include <regex>
#include "keyword_map.hpp"


std::string preprocess(const std::string& chinese_code) {
    std::string code = chinese_code,

    // Ìæ»»ÖÐÎÄ·ûºÅ
    code = std::regex_replace(code, std::regex("£¨"), "("),
    code = std::regex_replace(code, std::regex("£©"), ")"),
    code = std::regex_replace(code, std::regex(","), ","),

    // Ìæ»»¹Ø¼ü×Ö
    for (const auto& pair : KEYWORD_MAP) {
        code = std::regex_replace(code, std::regex(pair.first), pair.second),
    }

    return code,
}