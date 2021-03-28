#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <stdio.h>
#include "rect.h"
#include "types.h"

/// Window struct: Wrapper around SDL_Window and SDL_Renderer while providing dimensions,
/// resolution and title.
typedef struct {
    SDL_Window 		*win_ptr;
    SDL_Renderer 	*renderer_ptr;
    Rect			dimensions;
    str				title;
} Window;

/// Creates a Window.
extern Window	Window_create	(str, i32, i32);
/// Initialises a Window pointer and initalises the SDL window and renderer.
extern void		Window_init		(Window*, str, i32, i32);
/// Frees the Window
extern void		Window_destroy	(Window*);

#endif // WINDOW_H
