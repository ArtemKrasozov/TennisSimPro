#include "AIEngine.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @brief Конструктор AIEngine. Инициализирует генератор случайных чисел.
 */
AIEngine::AIEngine() {
    std::srand(std::time(nullptr));  // Инициализация генератора случайных чисел
}

/**
 * @brief Рассчитывает следующий ход ИИ.
 * 
 * @param aiPlayer Игрок, управляемый ИИ.
 * @param opponent Противник.
 */
void AIEngine::calculateMove(Player& aiPlayer, Player& opponent) {
    std::cout << "ИИ анализирует ситуацию...\n";

    int riskFactor = evaluateRisk(aiPlayer, opponent);
    std::string decision = makeStrategicDecision(riskFactor);

    std::cout << "ИИ принимает решение: " << decision << std::endl;
}

/**
 * @brief Оценивает уровень риска для текущего состояния игры.
 * 
 * @param aiPlayer Игрок, управляемый ИИ.
 * @param opponent Противник.
 * @return int Уровень риска (чем выше, тем опаснее ситуация).
 */
int AIEngine::evaluateRisk(const Player& aiPlayer, const Player& opponent) {
    int scoreDifference = opponent.getScore() - aiPlayer.getScore();
    int randomFactor = std::rand() % 10;  // Дополнительный случайный фактор для разнообразия поведения

    int riskLevel = scoreDifference + randomFactor;

    if (riskLevel < 5) {
        std::cout << "Риск низкий. Можно атаковать!\n";
    } else if (riskLevel < 10) {
        std::cout << "Риск средний. Требуется сбалансированная стратегия.\n";
    } else {
        std::cout << "Риск высокий. Лучше играть на удержание.\n";
    }

    return riskLevel;
}

/**
 * @brief Принимает стратегическое решение на основе уровня риска.
 * 
 * @param riskFactor Уровень риска.
 * @return std::string Выбранная стратегия.
 */
std::string AIEngine::makeStrategicDecision(int riskFactor) {
    if (riskFactor < 5) {
        return aggressivePlay();
    } else if (riskFactor < 10) {
        return balancedPlay();
    } else {
        return defensivePlay();
    }
}

/**
 * @brief Выполняет агрессивную стратегию.
 * 
 * @return std::string Описание выбранного агрессивного действия.
 */
std::string AIEngine::aggressivePlay() {
    int move = std::rand() % 3;
    switch (move) {
        case 0: return "Мощный удар по линии";
        case 1: return "Подход к сетке и атака";
        case 2: return "Удар с вращением, чтобы сбить противника с толку";
    }
    return "Агрессивный удар";
}

/**
 * @brief Выполняет сбалансированную стратегию.
 * 
 * @return std::string Описание выбранного сбалансированного действия.
 */
std::string AIEngine::balancedPlay() {
    int move = std::rand() % 3;
    switch (move) {
        case 0: return "Средняя подача и контроль темпа игры";
        case 1: return "Чередование длинных и коротких ударов";
        case 2: return "Выжидательная игра с быстрым контрударом";
    }
    return "Сбалансированная стратегия";
}

/**
 * @brief Выполняет оборонительную стратегию.
 * 
 * @return std::string Описание выбранного оборонительного действия.
 */
std::string AIEngine::defensivePlay() {
    int move = std::rand() % 3;
    switch (move) {
        case 0: return "Глубокий оборонительный удар в дальний угол";
        case 1: return "Минимальный риск, удержание мяча в игре";
        case 2: return "Применение резаных ударов для снижения скорости игры";
    }
    return "Оборонительная тактика";
}

/**
 * @brief Прогнозирует исход игры на основе текущего состояния игроков.
 * 
 * @param aiPlayer Игрок, управляемый ИИ.
 * @param opponent Противник.
 * @return int 1 - победа, 0 - поражение.
 */
int AIEngine::predictOutcome(const Player& aiPlayer, const Player& opponent) {
    int aiSkill = std::rand() % 100 + aiPlayer.getScore();
    int opponentSkill = std::rand() % 100 + opponent.getScore();

    std::cout << "ИИ прогнозирует вероятность победы...\n";
    std::cout << "Уровень ИИ: " << aiSkill << " | Уровень соперника: " << opponentSkill << std::endl;

    return aiSkill > opponentSkill ? 1 : 0; // 1 - победа, 0 - проигрыш
}
