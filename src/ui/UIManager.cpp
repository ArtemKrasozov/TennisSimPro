#include "UIManager.h"
#include <iostream>

void UIManager::render() {
    std::cout << "Отрисовка интерфейса..." << std::endl;
}

void UIManager::showMainMenu() {
    std::cout << "[Главное меню]\n1. Начать игру\n2. Выйти\nВыберите действие: ";
}
