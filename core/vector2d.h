#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "types.h"

typedef struct {
    i32 x;
    i32 y;
} Vector2d;

extern Vector2d 	Vector2d_create	(i32, i32);
extern void			Vector2d_init	(Vector2d*, i32, i32);

#endif // VECTOR2D_H
