#include "vector2d.h"

Vector2d Vector2d_create(i32 x, i32 y) {
    Vector2d vec2d;
    Vector2d_init(&vec2d, x, y);
    return vec2d;
}

void Vector2d_init(Vector2d* vec2d, i32 x, i32 y) {
    vec2d->x = x;
    vec2d->y = y;
}
