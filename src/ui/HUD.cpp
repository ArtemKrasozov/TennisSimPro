#include "HUD.h"
#include <iostream>

void HUD::displayScore(int player1, int player2) {
    std::cout << "Счёт: Игрок 1 - " << player1 << " | Игрок 2 - " << player2 << std::endl;
}

void HUD::showMessage(const std::string& message) {
    std::cout << "[Сообщение]: " << message << std::endl;
}
