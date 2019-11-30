#include "Window.h"

Window::Window(const std::string Title, const int Width, const int Height) {
    this->WindowWidth = Width;
    this->WindowHeight = Height;
    this->WindowTitle = Title;
    Set_WindowSize(WindowWidth, WindowHeight);
    Set_WindowTitle(WindowTitle);

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);
    CursorInfo.bVisible = false; 
    SetConsoleCursorInfo(handle, &CursorInfo);
}

void Window::Set_WindowTitle(const std::string Name) {
    WindowTitle = Name;
    ConsoleRun("title " + WindowTitle);
}

void Window::Set_WindowSize(const int Width, const int Height) {
    WindowWidth = Width;
    WindowHeight = Height;
    ConsoleRun("mode con cols=" + to_String(WindowWidth) + " lines=" + to_String(WindowHeight));
}