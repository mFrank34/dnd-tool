// include/menu.h
#pragma once 
#include <string>
#include <vector>

class Menu {
public:
	void show();
	bool handle_input(int choice);
private:
	std::vector<std::string> options = {"Dice Roller", "Stats Roller", "Charature Sheet", "Credits"};
};
