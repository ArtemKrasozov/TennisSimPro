/**
 * @file AIPlayer.h
 * @brief Заголовочный файл для класса AIPlayer.
 */

 #ifndef AIPLAYER_H
 #define AIPLAYER_H
 
 #include <cstdlib>  // Для использования std::rand()
 #include <iostream> // Для вывода в консоль
 
 class AIPlayer {
 public:
     /**
      * @brief Принимает решение ИИ-игрока относительно следующего хода.
      * 
      * Функция случайным образом выбирает одно из трех действий:
      * - Атака
      * - Защитная тактика
      * - Обманный удар
      */
     void makeDecision();
 };
 
 #endif // AIPLAYER_H
 