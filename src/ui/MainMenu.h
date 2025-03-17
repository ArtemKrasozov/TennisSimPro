/**
 * @file MainMenu.h
 * @brief Заголовочный файл для класса MainMenu, который управляет главным меню игры.
 */

 #ifndef MAINMENU_H
 #define MAINMENU_H
 
 #include <iostream> // Для вывода в консоль
 #include <string>   // Для использования std::string
 
 class MainMenu {
 public:
     /**
      * @brief Отображает главное меню игры.
      * 
      * Эта функция выводит сообщение о том, что главное меню загружено, и готово к взаимодействию с пользователем.
      */
     void show();
 
     /**
      * @brief Получает выбор пользователя из главного меню.
      * 
      * Эта функция считывает ввод пользователя и возвращает его выбор.
      * 
      * @return Выбор пользователя, представленный числом.
      */
     int getUserChoice();
 };
 
 #endif // MAINMENU_H
 