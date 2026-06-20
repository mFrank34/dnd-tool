// src/menu.h
#include "menu.h"
#include <vector>
#include <iostream>

void Menu::show() {
	int select = 0;
	for (std::string choice : options) {
		std::cout << "[" << select + 1 << "]";
		std::cout << choice << "\n"; 
	};
};

bool Menu::handle_input(int choice) {
	return true;
};
