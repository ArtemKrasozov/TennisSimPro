/**
 * @file HUD.h
 * @brief Заголовочный файл для класса HUD, который управляет отображением интерфейса пользователя.
 */

 #include "HUD.h"
 #include <iostream>
 #include <iomanip>
 
 /**
  * @brief Конструктор для инициализации интерфейса HUD.
  * 
  * Инициализирует таймер игры и очки игроков, а также устанавливает указатели на игроков как nullptr.
  */
 HUD::HUD() : gameTime(0), player1Score(0), player2Score(0), player1(nullptr), player2(nullptr) {}
 
 /**
  * @brief Устанавливает первого игрока.
  * 
  * Эта функция позволяет указать первого игрока, чьи очки будут отображаться на интерфейсе.
  * 
  * @param player Указатель на объект класса Player, представляющий первого игрока.
  */
 void HUD::setPlayer1(const Player* player) {
     player1 = player;
 }
 
 /**
  * @brief Устанавливает второго игрока.
  * 
  * Эта функция позволяет указать второго игрока, чьи очки будут отображаться на интерфейсе.
  * 
  * @param player Указатель на объект класса Player, представляющий второго игрока.
  */
 void HUD::setPlayer2(const Player* player) {
     player2 = player;
 }
 
 /**
  * @brief Обновляет данные интерфейса на основе прошедшего времени.
  * 
  * Эта функция увеличивает общее время игры на заданное количество времени и обновляет очки игроков.
  * 
  * @param elapsedTime Время, прошедшее с момента последнего обновления, которое будет добавлено к общему времени.
  */
 void HUD::update(int elapsedTime) {
     gameTime += elapsedTime;
     updateScore();
 }
 
 /**
  * @brief Сбрасывает таймер игры.
  * 
  * Эта функция сбрасывает таймер игры в начальное состояние (0).
  */
 void HUD::resetTimer() {
     gameTime = 0;
 }
 
 /**
  * @brief Обновляет очки игроков.
  * 
  * Эта функция обновляет очки для обоих игроков, если они были установлены.
  */
 void HUD::updateScore() {
     if (player1 && player2) {
         player1Score = player1->getScore();
         player2Score = player2->getScore();
     }
 }
 
 /**
  * @brief Отображает информацию об игре на экране.
  * 
  * Эта функция выводит текущее время игры и очки игроков на экран.
  */
 void HUD::display() const {
     std::cout << "=== HUD ===\n";
     std::cout << "Время игры: " << gameTime << " секунд\n";
     std::cout << "Игрок 1: " << player1Score << " очков\n";
     std::cout << "Игрок 2: " << player2Score << " очков\n";
 }
 