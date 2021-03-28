#ifndef RECT_H
#define RECT_H

#include "types.h"
#include "point2d.h"

struct Bounds {
    Point2d top_left;
    Point2d top_right;
    Point2d bottom_left;
    Point2d bottom_right;
};

/// Rect struct: useful for sprites and windows
typedef struct {
    i32 			width;
    i32 			height;
    Point2d 		position;
    struct Bounds 	bounds;
} Rect;

/// Creates a Rect
extern Rect	Rect_create 	(i32, i32, Point2d);
/// Initialises a Rect pointer
extern void	Rect_init 		(Rect*, i32, i32, Point2d);
/// Checks if two Rects intersect
extern bool	Rect_intersects	(const Rect*, const Rect*);

#endif // RECT_H
