#ifndef TEXTURE_H_
#define TEXTURE_H_

#include "../GameObject/Vector2.h"
#include <string>

namespace EGEngine {
    class Texture {
        private:
            EGEngine::Vector2 size;
            std::string data;
        public:
            Texture(const Vector2 Size = Vector2(0, 0), const std::string Data = "");
            char Get_PosImage(const Vector2 Position) { return data[Position.y * size.x + Position.x]; }
            void Set_PosImage(const char Image, const Vector2 Position) { data[Position.y * size.x + Position.x] = Image; }
            std::string Get_Data() { return data; }
            EGEngine::Vector2 Get_Size() { return size; }
    };   
}

#endif