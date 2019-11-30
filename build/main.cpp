#include "EGEngine/Game/Game.h"
using namespace EGEngine;

Game game = Game("Hello, World");

GameObject* obj;

void Start()  {
    std::string s = "Hello, World!";
    obj = game.new_GameObject(Vector2(53, 0), Texture(Vector2(s.length(),1), s), 0);
}

int i = 0;

void Update() {   
    i = !i;
    obj->position.x = 53 + i;
}

int main() { 
    game.Run(Start, Update);
    return 0;
}