#ifndef VECTOR2_H_
#define VECTOR2_H_

namespace EGEngine {
    struct Vector2 {
        int x;
        int y;
        Vector2(const int _x = 0, const int _y = 0) : 
            x(_x), y(_y) {}
    };
}

#endif
