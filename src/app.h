#pragma once
#include <string>
#include "menu.h"

class App {
    public:
        void run();

    private:
        void print_intro();
        Menu menu;
};
