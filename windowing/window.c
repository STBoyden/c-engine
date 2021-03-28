#include "window.h"

Window Window_create(str title, i32 width, i32 height) {
    Window win;
    Window_init(&win, title, width, height);
    return win;
}

void Window_init(Window* window, str title, i32 width, i32 height) {
    window->dimensions = Rect_create(width, height, (Point2d) {0});
    window->title = title;

    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        fprintf(stderr, "Couldn't initialise SDL2: %s\n", SDL_GetError());
        exit(1);
    }

    window->win_ptr =
            SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                             width, height, 0);

    if (!window->win_ptr) {
        fprintf(stderr, "Couldn't create SDL window of %dx%d: %s\n",
                window->dimensions.width, window->dimensions.height, SDL_GetError());
        exit(1);
    }

    window->renderer_ptr =
            SDL_CreateRenderer(window->win_ptr, -1, SDL_RENDERER_PRESENTVSYNC);

    if (!window->renderer_ptr) {
        fprintf(stderr, "Couldn't create SDL renderer: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
}

void Window_destroy(Window* window) {
   SDL_DestroyRenderer(window->renderer_ptr);
   SDL_DestroyWindow(window->win_ptr);
   window->renderer_ptr = NULL;
   window->win_ptr = NULL;

   SDL_Quit();
}
