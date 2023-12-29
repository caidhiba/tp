#include<iostream>
#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
       std::cout << "sdl couldnt initialize! sdl error:" SDL_GetError();
        return -1;
    }


    return EXIT_SUCCESS;
}
