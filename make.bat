@echo off
mkdir .\build\
mkdir .\build\EGEngine\
xcopy .\src\*.* .\build\EGEngine\ /s /e
g++ -c .\build\EGEngine\Tool\Tool.cpp -o .\build\EGEngine\Tool\Tool.o
g++ -c .\build\EGEngine\Window\Window.cpp -o .\build\EGEngine\Window\Window.o
g++ -c .\build\EGEngine\Texture\Texture.cpp -o .\build\EGEngine\Texture\Texture.o
g++ -c .\build\EGEngine\Game\Game.cpp -o .\build\EGEngine\Game\Game.o
md .\build\main.cpp
