#pragma once

#include <SDL.h>
#include <memory>

class Window
{
public:
	static void init(const char* title, const int x, const int y, const unsigned int w, const unsigned int h, const Uint32 flags);
	static SDL_Window* getWindow();

private:
	static std::shared_ptr<Window> getInstance();

private:
	static std::shared_ptr<Window> instance;

	SDL_Window* window;
};