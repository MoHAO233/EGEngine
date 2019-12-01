@echo off
mkdir .\build\
mkdir .\build\EGEngine\
xcopy .\src\*.* .\build\EGEngine\ /s /e
g++ -c .\build\EGEngine\Tool\Tool.cpp -o .\build\EGEngine\Tool\Tool.o
g++ -c .\build\EGEngine\Window\Window.cpp -o .\build\EGEngine\Window\Window.o
g++ -c .\build\EGEngine\Texture\Texture.cpp -o .\build\EGEngine\Texture\Texture.o
g++ -c .\build\EGEngine\Game\Game.cpp -o .\build\EGEngine\Game\Game.o
echo #include "EGEngine/Game/Game.h" >> .\build\main.cpp
echo using namespace EGEngine; >> .\build\main.cpp
echo. >> .\build\main.cpp
echo Game game = Game("Hello, World!"); >> .\build\main.cpp
echo. >> .\build\main.cpp
echo void Start() {} //Do sth in Game Beginng >> .\build\main.cpp
echo. >> .\build\main.cpp
echo void Update() {} //Do sth in Game Running Time >> .\build\main.cpp
echo. >> .\build\main.cpp
echo int main(int argc, char *argv[]) { >> .\build\main.cpp
echo    game.Run(Start, Update);//The Game Running Time >> .\build\main.cpp
echo    return 0; >> .\build\main.cpp
echo } >> .\build\main.cpp


