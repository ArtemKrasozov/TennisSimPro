#ifndef HUD_H
#define HUD_H

#include <string>
#include "Player.h"

class HUD {
public:
    HUD();

    void update(int elapsedTime);
    void display() const;

    void setPlayer1(const Player* player);
    void setPlayer2(const Player* player);
    
    void resetTimer();
    void updateScore();
    void showMatchStats() const;

private:
    int gameTime;  // Время с начала игры (в секундах)
    int player1Score;
    int player2Score;

    const Player* player1;
    const Player* player2;

    std::string formatTime(int seconds) const;
};

#endif
