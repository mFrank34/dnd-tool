// src/menu.h
#include "menu.h"
#include <vector>
#include <iostream>

void Menu::show() {
	int select = 0;
    std::cout << "What would you like to do? \n";
	for (std::string choice : options) {
        select += 1;
		std::cout << "[" << select << "] ";
		std::cout << choice << "\n"; 
	};
};

bool Menu::handle_input(int choice) {
	return true;
};
