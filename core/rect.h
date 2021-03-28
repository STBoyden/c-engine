#ifndef RECT_H
#define RECT_H

#include "types.h"
#include "vector2d.h"

struct Bounds {
    Vector2d top_left;
    Vector2d top_right;
    Vector2d bottom_left;
    Vector2d bottom_right;
};

typedef struct {
    i32 			width;
    i32 			height;
    Vector2d 		position;
    struct Bounds 	bounds;
} Rect;

extern Rect	Rect_create		(i32, i32, Vector2d);
extern void	Rect_init		(Rect*, i32, i32, Vector2d);
extern bool	Rect_intersects	(const Rect*, const Rect*);

#endif // RECT_H
