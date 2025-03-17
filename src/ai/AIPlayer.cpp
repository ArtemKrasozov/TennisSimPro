/**
 * @file AIPlayer.h
 * @brief Заголовочный файл для класса AIPlayer.
 */

 #include "AIPlayer.h"
 #include <iostream>
 
 /**
  * @brief Принимает решение ИИ-игрока относительно следующего хода.
  * 
  * Функция случайным образом выбирает одно из трех действий:
  * - Атака
  * - Защитная тактика
  * - Обманный удар
  */
 void AIPlayer::makeDecision() {
     int decision = std::rand() % 3;  // Генерация случайного числа для выбора действия
 
     if (decision == 0) {
         std::cout << "ИИ игрок решает атаковать!" << std::endl;
     } else if (decision == 1) {
         std::cout << "ИИ игрок выбирает защитную тактику." << std::endl;
     } else {
         std::cout << "ИИ игрок делает обманный удар!" << std::endl;
     }
 }
 