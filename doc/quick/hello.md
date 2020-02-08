# Hello, World！
本教程将会带你实现一个简单的Hello, World程序
## 1. 配置环境
输入如下指令：
```bash
$ git clone git@github.com:BigHAO233/EGEngine.git ./EGEngine
$ cd ./EGEngine
$ ./make.bat
```
将会生成一个如下结构的文件夹：
```
.
├─build
│  └─EGEngine
│      ├─Game
│      ├─GameObject
│      ├─Texture
│      ├─Tool
│      └─Window
└─src
    ├─Game
    ├─GameObject
    ├─Texture
    ├─Tool
    └─Window
```
## 2. 创建窗体
打开`./build`下的`main.cpp`，你将看到如下内容：
```cpp
#include "EGEngine/Game/Game.h" 
using namespace EGEngine; 
 
Game game = Game("Hello, World!"); 
 
void Start() {} //Do sth in Game Beginning 
 
void Update() {} //Do sth in Game Running Time 
 
int main(int argc, char *argv[]) { 
   game.Run(Start, Update);//The Game Running Time 
   return 0; 
} 
```
接下来我将为你介绍程序内的每一项内容：
```cpp
#include "EGEngine/Game/Game.h" 
```
这是EGEngine的头文件，在程序的首部引用它才能使用EGE。
```cpp
Game game = Game("Hello, World!"); 
```
这句语句定义了一个变量`game`，它的类`Game`是游戏类，是整个游戏的核心。
`Game()`是`Game`类的构造函数，它的第一个变量为游戏名。
```cpp
void Start() {} //Do sth in Game Beginng 
```
`Start`函数是在游戏开始时执行的函数，你需要在这里定义变量，完成初始化。
```cpp
void Update() {} //Do sth in Game Running Time 
```
`Update`函数是在游戏进行中的函数，这里可以进行很多事。
```cpp
game.Run(Start, Update);
```
`Game.Run`函数是游戏的启动函数，利用它来启动EGE。

---  
现在，输入如下指令：
```bash
$ g++ -c ./build/main.cpp -o ./build/main.o
$ ./compile.bat
```
在资源管理器内打开`./build/main.exe`，你将看到一个标题为`Hello, World!`的黑色窗体
## 3. 生成一个物体
将`main.cpp`内的`Start`函数改为：
```cpp
void Start() {
    GameObject* obj = game.new_GameObject();
    obj->position = Vector2(59, 14);
    obj->texture = Texture(Vector2(1, 1), "@");
}
```
输入：
```bash
$ g++ -c ./build/main.cpp -o ./build/main.o
$ ./compile.bat
```
打开`main.exe`你将看到一个`@`位于窗体的最中央。
