#include "GameEngine.h"
#include <iostream>

void GameEngine::start() {
    std::cout << "Игра запущена!" << std::endl;
    running = true;
}

void GameEngine::update() {
    if (!running) return;

    std::cout << "Обновление состояния игры..." << std::endl;
    simulation.simulateMatch();
}

void GameEngine::stop() {
    std::cout << "Игра остановлена!" << std::endl;
    running = false;
}
