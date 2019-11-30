#ifndef WINDOWS_H_
#define WINDOWS_H_

#include "../Tool/Tool.h"
#include <string>
#include <Windows.h>

class Window{
    private:
        std::string WindowTitle;
        int WindowWidth;
        int WindowHeight;
    public:
        Window(const std::string Title = "null", const int Width = 120, const int Height = 30);
        std::string Get_WinowsTitle() { return WindowTitle; }
        void Set_WindowTitle(const std::string Name);
        void Set_WindowSize(const int Width  = 120, const int Height = 30);
};
#endif