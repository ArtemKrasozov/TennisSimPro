#include "MatchSimulation.h"
#include <iostream>
#include <cstdlib>

void MatchSimulation::simulateMatch() {
    std::cout << "Начало симуляции теннисного матча..." << std::endl;

    int player1_score = rand() % 10;
    int player2_score = rand() % 10;

    std::cout << "Игрок 1: " << player1_score << " | Игрок 2: " << player2_score << std::endl;

    if (player1_score > player2_score) {
        std::cout << "Игрок 1 победил!" << std::endl;
    } else if (player2_score > player1_score) {
        std::cout << "Игрок 2 победил!" << std::endl;
    } else {
        std::cout << "Ничья!" << std::endl;
    }
}
