#include "Tool.h"

std::string to_String(const int Number) {
    std::stringstream StrStm;
    StrStm << Number;
    return StrStm.str();
}

int to_Interger(const std::string Str) {
    int retNum = 0;
    std::stringstream StrStm;
    StrStm << Str;
    StrStm >> retNum;
    return retNum;
}