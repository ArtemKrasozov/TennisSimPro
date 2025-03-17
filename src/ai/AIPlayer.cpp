/**
 * @file AIPlayer.h
 * @brief Заголовочный файл для класса AIPlayer.
 */

 #include "AIPlayer.h"
 #include <iostream>
 
 /**
  * @brief Выполняет решение ИИ-игрока.
  *
  * Функция случайным образом выбирает одно из трех действий:
  * - Атака
  * - Защитная тактика
  * - Обманный удар
  */
 void AIPlayer::makeDecision() {
     int decision = rand() % 3;
     
     if (decision == 0) {
         std::cout << "ИИ игрок решает атаковать!" << std::endl;
     } else if (decision == 1) {
         std::cout << "ИИ игрок выбирает защитную тактику." << std::endl;
     } else {
         std::cout << "ИИ игрок делает обманный удар!" << std::endl;
     }
 }
 