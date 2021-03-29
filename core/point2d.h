#ifndef POINT2D_H
#define POINT2D_H

#include "types.h"

/// Point2d struct: Represents a point on a two-dimensional plane
typedef struct {
    i32 x;
    i32 y;
} Point2d;

/// Creates a Point2d
extern Point2d Point2d_create(i32, i32);
/// Initialises a Point2d pointer
extern void Point2d_init(Point2d*, i32, i32);

#endif // POINT2D_H
