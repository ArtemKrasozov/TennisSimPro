#include "MainMenu.h"
#include <iostream>

void MainMenu::show() {
    std::cout << "Главное меню загружено!" << std::endl;
}

int MainMenu::getUserChoice() {
    int choice;
    std::cin >> choice;
    return choice;
}
