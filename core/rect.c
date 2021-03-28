#include "rect.h"

Rect Rect_create(i32 width, i32 height, Point2d position) {
    Rect rect;
    Rect_init(&rect, width, height, position);
    return rect;
}

void Rect_init(Rect* rect, i32 width, i32 height, Point2d position) {
    rect->width = width;
    rect->height = height;
    rect->position = position;
    rect->bounds = (struct Bounds) {
        .top_left 		= rect->position,
        .top_right		= Point2d_create(rect->position.x + rect->width,
                                          rect->position.y),
        .bottom_left	= Point2d_create(rect->position.x,
                                          rect->position.y + rect->height),
        .bottom_right	= Point2d_create(rect->position.x + rect->width,
                                          rect->position.y + rect->height)
    };
}

bool Rect_intersects(const Rect* rect1, const Rect* rect2) {
    return !(
        (rect1->bounds.top_left.x > rect2->bounds.bottom_right.x)
        || (rect1->bounds.bottom_right.x < rect2->bounds.top_left.x)
        || (rect1->bounds.top_left.y > rect2->bounds.bottom_right.y)
        || (rect1->bounds.bottom_right.y < rect2->bounds.top_left.y));
}
