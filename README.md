# Easy Game Engine - 易游引擎
> 一个用于制作控制台游戏的游戏引擎

## 搭建 - Make
1. 运行如下指令拷贝EGEngine至本地：
```bash
$ git clone git@github.com:BigHAO233/EGEngine.git ./EGEngine
$ cd ./EGEngine
```
2. 使用`make.bat`搭建开发环境：
```bash
$ ./make.bat
$ cd ./build
```
`make.bat`会自动为您创建一个开发环境位于`./build`下，接下来使用您的编辑器编辑`./build/main.cpp`即可。

## 编译 - Compile
1. 请先编译您的工程文件为`main.o`
```bash
$ g++ -c ./build/main.cpp -o ./build/main.o
```
2. 使用`compile.bat`连接EGEngine
```bash
$ ./compile.bat
```

