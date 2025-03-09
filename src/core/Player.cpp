#include "Player.h"
#include <iostream>

Player::Player(std::string name) : name(name), score(0) {}

std::string Player::getName() {
    return name;
}

void Player::increaseScore(int points) {
    score += points;
    std::cout << name << " получает " << points << " очков. Всего: " << score << std::endl;
}

int Player::getScore() {
    return score;
}
