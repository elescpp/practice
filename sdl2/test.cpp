namespace SDL{
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_hints.h>
}

#include <boost/chrono/chrono.hpp>

int main(void)
{
	SDL::SDL_Init(SDL::SDL_INIT_EVERYTHING);
	auto window = SDL::SDL_CreateWindow("test", 0, 0, 640, 480, SDL::SDL_WINDOW_SHOWN);
	SDL::SDL_SetHint(SDL::SDL_HINT_RENDER_SCALE_QUALITY, 1);
}
