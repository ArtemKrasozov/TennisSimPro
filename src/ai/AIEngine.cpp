#include "AIEngine.h"
#include <iostream>

void AIEngine::calculateMove() {
    std::cout << "ИИ анализирует ситуацию..." << std::endl;
}

int AIEngine::predictOutcome() {
    return rand() % 2;  // Простая имитация предсказания (0 - проигрыш, 1 - победа)
}
