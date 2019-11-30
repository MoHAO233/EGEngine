#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_

#include "../Texture/Texture.h"
#include "Vector2.h"

using EGEngine::Vector2;
using EGEngine::Texture;

namespace EGEngine {
    class GameObject {
        public:
            Vector2 position;
            Texture texture;
            int layer;
            bool operator <(const GameObject &x) const { return layer > x.layer; }
            GameObject(const Vector2 Pos = Vector2(0, 0), const Texture Text = Texture(Vector2(0, 0)), const int Lay = 0) {
                this->position = Pos;
                this->texture = Text;
                this->layer = Lay;
            }
    };
}

#endif