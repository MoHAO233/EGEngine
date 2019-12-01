#ifndef TEXT_H_
#define TEXT_H_

#include "../GameObject/GameObject.h"

namespace EGEngine {
    class Text : public EGEngine::GameObject {
        public:
        Text(std::string Data, Vector2 Position) {
            this->position = Position;
            this->layer = -1;
            this->texture = Texture(Vector2(Data.length(), 1), Data);
        }
        GameObject to_GameObject() { return GameObject(position, texture, layer); }
    };
}

#endif