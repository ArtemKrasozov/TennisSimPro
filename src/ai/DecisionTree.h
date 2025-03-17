/**
 * @file DecisionTree.h
 * @brief Заголовочный файл для класса DecisionTree, который моделирует дерево решений для ИИ игрока.
 */

 #ifndef DECISIONTREE_H
 #define DECISIONTREE_H
 
 #include <string>   // Для использования std::string
 #include <cstdlib>  // Для использования rand()
 #include <iostream> // Для вывода в консоль
 
 class DecisionTree {
 public:
     /**
      * @brief Строит дерево решений для ИИ.
      *
      * Эта функция инициирует создание дерева решений для ИИ игрока, 
      * которое будет использоваться для выбора действий.
      */
     void buildTree();
 
     /**
      * @brief Принимает решение на основе дерева решений.
      *
      * Функция случайным образом выбирает одно из трех действий:
      * - Атака
      * - Защита
      * - Обманный удар
      * 
      * @return Строка, представляющая выбранное действие.
      */
     std::string makeDecision();
 };
 
 #endif // DECISIONTREE_H
 