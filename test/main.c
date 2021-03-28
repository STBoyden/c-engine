#include <stdio.h>
#include "rect.h"
#include "types.h"
#include "window.h"

bool test_rectangle_intersect	();
bool test_window_creation		();

int main() {
    str result = test_rectangle_intersect() ? "passed" : "failed";
    printf("test_rectangle_intersect (expected pass) got: %s\n", result);

    result = test_window_creation() ? "passed" : "failed";
    printf("test_window_creation (expected pass) got: %s\n", result);
}


bool test_rectangle_intersect() {
    Rect r1 = Rect_create(100, 200, Point2d_create(0, 0));
    Rect r2 = Rect_create(100, 200, Point2d_create(50, 100));

    return Rect_intersects(&r1, &r2);
}

bool test_window_creation() {
    Window win = Window_create("Test Window", 1280, 720);

    SDL_Event event;

    int width = 0;
    int height = 0;

    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            default:
                SDL_GetWindowSize(win.win_ptr, &width, &height);
                Window_destroy(&win);
                break;
        }
    }

    return (width == win.dimensions.width) && (height == win.dimensions.height);
}
