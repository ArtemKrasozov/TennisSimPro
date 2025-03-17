/**
 * @file MatchSimulation.h
 * @brief Заголовочный файл для класса MatchSimulation, который моделирует теннисный матч.
 */

 #ifndef MATCHSIMULATION_H
 #define MATCHSIMULATION_H
 
 #include <cstdlib>  // Для использования rand()
 #include <iostream> // Для вывода в консоль
 
 class MatchSimulation {
 public:
     /**
      * @brief Симулирует теннисный матч.
      *
      * Эта функция генерирует случайные очки для двух игроков и выводит результат матча.
      * В конце сообщается, кто победил, или если матч закончился ничьей.
      */
     void simulateMatch();
 };
 
 #endif // MATCHSIMULATION_H
 