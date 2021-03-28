#include <stdio.h>
#include "rect.h"
#include "types.h"

bool test_rectangle_intersect();

int main() {
    str result = test_rectangle_intersect() ? "passed" : "failed";
    printf("test_rectangle_intersect (expected pass) got: %s\n", result);
}


bool test_rectangle_intersect() {
    Rect r1 = Rect_create(100, 200, Point2d_create(0, 0));
    Rect r2 = Rect_create(100, 200, Point2d_create(50, 100));

    return Rect_intersects(&r1, &r2);
}
