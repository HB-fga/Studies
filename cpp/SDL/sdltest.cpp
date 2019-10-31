#include <SDL2/SDL.h>
#include <iostream>

//g++ sdltest.cpp `pkg-config --libs --cflags sdl2` && ./a.out

using namespace std;

int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);//basic stuff

    SDL_Window *window;//creates a window

    window = SDL_CreateWindow("Nicole Peixe Boi!!!",
                                SDL_WINDOWPOS_CENTERED, //xpos
                                SDL_WINDOWPOS_CENTERED, //ypos
                                400, //width
                                200, //height
                                SDL_WINDOW_RESIZABLE);

    if(window==NULL)
    {
        cout<<"There was an error\n"<<SDL_GetError()<<endl;
    }

    //SDL_Delay(Miliseconds);

    //Main Event loop
    SDL_Event event;
    bool running = true;

    while (running)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type==SDL_QUIT)
            {
                running=false;
                break;
            }
        }
    }
    //end of Main Event loop

    SDL_DestroyWindow(window);

    SDL_Quit();//basic stuff
    return 0;
}