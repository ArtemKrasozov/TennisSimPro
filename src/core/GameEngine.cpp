/**
 * @file GameEngine.h
 * @brief Заголовочный файл для класса GameEngine, управляющего процессом игры.
 */

 #include "GameEngine.h"
 #include <iostream>
 
 /**
  * @brief Запускает игру.
  *
  * Эта функция инициализирует и запускает процесс игры, устанавливая флаг 
  * "running" в значение true, что позволяет обновлять игру.
  */
 void GameEngine::start() {
     std::cout << "Игра запущена!" << std::endl;
     running = true;
 }
 
 /**
  * @brief Обновляет состояние игры.
  *
  * Эта функция вызывается для обновления состояния игры. Если игра не запущена,
  * обновление не происходит. В противном случае выполняется симуляция матча.
  */
 void GameEngine::update() {
     if (!running) return;
 
     std::cout << "Обновление состояния игры..." << std::endl;
     simulation.simulateMatch();
 }
 
 /**
  * @brief Останавливает игру.
  *
  * Эта функция останавливает процесс игры, устанавливая флаг "running" в значение false.
  */
 void GameEngine::stop() {
     std::cout << "Игра остановлена!" << std::endl;
     running = false;
 }
 