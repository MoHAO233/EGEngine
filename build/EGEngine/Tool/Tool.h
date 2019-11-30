#ifndef TOOL_H_
#define TOOL_H_

#include <string>
#include <sstream>

std::string to_String(const int Number);
int to_Interger(const std::string Str);

inline void ConsoleRun(const std::string Com) { system(Com.data()); }

#endif
