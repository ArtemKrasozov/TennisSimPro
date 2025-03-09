#include "HUD.h"
#include <iostream>
#include <iomanip>

HUD::HUD() : gameTime(0), player1Score(0), player2Score(0), player1(nullptr), player2(nullptr) {}

void HUD::setPlayer1(const Player* player) {
    player1 = player;
}

void HUD::setPlayer2(const Player* player) {
    player2 = player;
}

void HUD::update(int elapsedTime) {
    gameTime += elapsedTime;
    updateScore();
}

void HUD::resetTimer() {
    gameTime = 0;
}

void HUD::updateScore() {
    if (player1 && player2) {
        player1Score = player1->getScore();
        player2Score = player2->getScore();
    }
}

void HUD::display() const {
    std::cout << "=== HUD ===\n";
    std::cout << "Время игры
