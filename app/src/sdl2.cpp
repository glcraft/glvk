module;

#include <SDL2/SDL.h>

module sdl;
import glm;
import std;

namespace sdl2 {
    Window::Window(SDL_Window* window) : window(window, SDL_DestroyWindow)
    {}
    auto Window::shouldClose() -> bool {
        return false; //SDL_WindowShouldClose(this->window.get());
    }
    Context::Context() {
        SDL_Init(SDL_INIT_VIDEO);
        // SDL_Vulkan_LoadLibrary(nullptr);
        this->shared_counter = new int(1);
    }
    Context::Context(const Context& other) {
        if (other.shared_counter) {
            *other.shared_counter += 1;
        }
        this->shared_counter = other.shared_counter;
    }
    Context::Context(Context&& other) {
        this->shared_counter = other.shared_counter;
        other.shared_counter = nullptr;
    }
    Context::~Context() {
        if (this->shared_counter && (--*this->shared_counter) == 0) {
            SDL_Quit();
            delete this->shared_counter;
        }
    }

    auto Context::createWindow(int width, int height, const char* title) const -> Window {
        auto w = Window(SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_VULKAN));
        auto err = SDL_GetError();
        if (err) {
            std::array<char, 1024> errMsg;
            SDL_GetErrorMsg(errMsg.data(), 1024);
            std::println("Failed to create window: {}\n{}", err, std::string_view(errMsg.data()));
            int i=0;
        }
        return w;
    }
}