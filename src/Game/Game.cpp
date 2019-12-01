#include "Game.h"

using namespace EGEngine;

Game::Game(const std::string name, const Vector2 Size) {
    this->gameWin = Window(name, Size.x, Size.y);
    this->size = Size;
    this->name = name;
    for (int i = 0; i < Size.y; i ++) {
        std::string lineStr = "";
        for (int j = 0; j < Size.x; j ++) lineStr += " ";
        this->screenWin.push_back(lineStr);
    }
}

void Game::Render() {
    std::priority_queue<GameObject*> render = screen;
    while (!render.empty()) {
        GameObject now = *render.top();
        render.pop();
        for (int y = now.position.y; y < now.position.y + now.texture.Get_Size().y; y ++) {
            for (int x = now.position.x; x < now.position.x + now.texture.Get_Size().x; x ++) {
                screenWin[y][x] = now.texture.Get_PosImage(Vector2(x - now.position.x, y - now.position.y));
            }
        }
    }
}

GameObject* Game::new_GameObject(const Vector2 Pos, const Texture Text, const int Lay) {
    GameObject* obj =  new GameObject(Pos, Text, Lay);
    screen.push(obj);
    return obj;
}

void Game::Draw() {
    ConsoleRun("cls");
    for (int i = 0; i < size.y; i ++) {
        printf("%s", screenWin[i].data());
        screenWin[i].clear();
    }
    for (int i = 0; i < size.y; i ++) {
        for (int j = 0; j < size.x; j ++) {
            screenWin[i] += " ";
        }
    }
}

void Game::Run(runFun Start, runFun Update) {
    Start();
    Render();
    Draw();
    while (1) {
        Update();
        Render();
        Draw();
    }
}