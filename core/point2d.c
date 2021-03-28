#include "point2d.h"

Point2d Point2d_create(i32 x, i32 y) {
    Point2d vec2d;
    Point2d_init(&vec2d, x, y);
    return vec2d;
}

void Point2d_init(Point2d* vec2d, i32 x, i32 y) {
    vec2d->x = x;
    vec2d->y = y;
}
