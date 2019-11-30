#include "Texture.h"

using namespace EGEngine;

Texture::Texture(const Vector2 Size, const std::string Data) {
    this->size = Size;
    std::string retData;
    if (Data == "") {
        for (int i = 0; i < Size.x * Size.y; i ++) retData += " ";
    }else {
        retData = Data;
    }
    this->data = retData;
}