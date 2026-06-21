/*
  
  Author: Frank <mffranks34@gmail.com>
  Created:  21/06/2026
  Updated:  21/06/2026
*/

#include "app.h"
#include "menu.h"
#include <string>
#include <iostream>

void App::run()
{
    print_intro();
    menu.show();
};

void App::print_intro()
{
    std::cout << R"(
 ____            _
|  _ \ _ __   __| |
| | | | '_ \ / _` |
| |_| | | | | (_| | 
|____/|_| |_|\__,_|
    Tool   Box
-------------------
)" << "\n";
};

