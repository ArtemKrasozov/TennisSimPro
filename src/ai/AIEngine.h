#ifndef AIENGINE_H
#define AIENGINE_H

#include "Player.h"
#include <string>

class AIEngine {
public:
    AIEngine();

    void calculateMove(Player& aiPlayer, Player& opponent);
    int predictOutcome(const Player& aiPlayer, const Player& opponent);

private:
    int evaluateRisk(const Player& aiPlayer, const Player& opponent);
    std::string makeStrategicDecision(int riskFactor);

    std::string aggressivePlay();
    std::string balancedPlay();
    std::string defensivePlay();
};

#endif
