/**
 * @file MatchSimulation.h
 * @brief Заголовочный файл для класса MatchSimulation, который моделирует теннисный матч.
 */

 #include "MatchSimulation.h"
 #include <iostream>
 #include <cstdlib>
 
 /**
  * @brief Симулирует теннисный матч.
  *
  * Эта функция генерирует случайные очки для двух игроков и выводит результат матча.
  * В конце сообщается, кто победил, или если матч закончился ничьей.
  */
 void MatchSimulation::simulateMatch() {
     std::cout << "Начало симуляции теннисного матча..." << std::endl;
 
     // Генерация случайных очков для двух игроков
     int player1_score = rand() % 10;
     int player2_score = rand() % 10;
 
     std::cout << "Игрок 1: " << player1_score << " | Игрок 2: " << player2_score << std::endl;
 
     // Определение победителя или ничьей
     if (player1_score > player2_score) {
         std::cout << "Игрок 1 победил!" << std::endl;
     } else if (player2_score > player1_score) {
         std::cout << "Игрок 2 победил!" << std::endl;
     } else {
         std::cout << "Ничья!" << std::endl;
     }
 }
 