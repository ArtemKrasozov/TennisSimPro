.. Tennis Sim Pro documentation master file, created by
   sphinx-quickstart on Mon Mar 17 12:20:25 2025.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Tennis Sim Pro documentation
============================

TennisSimPro – это симулятор тенниса, в котором игрок может управлять теннисистом, развивать его навыки, участвовать в турнирах и строить карьеру менеджера.

Add your content using ``reStructuredText`` syntax. See the
`reStructuredText <https://www.sphinx-doc.org/en/master/usage/restructuredtext/index.html>`_
documentation for details.

.. toctree::
   :maxdepth: 2
   :caption: Contents:

   cpp_reference

.. doxygenindex::

Модули
========

1. **GameCore**

Этот модуль отвечает за:

- Симуляцию теннисных матчей.
- Физику движения мяча и игроков.
- Характеристики спортсменов и их развитие.

2. **UIManager**

Этот модуль отвечает за:

- Интерфейс пользователя (меню, настройки, статистика).
- Анимации и отображение игровых событий.
- Взаимодействие игрока с игрой.

3. **AIEngine**

Этот модуль отвечает за:

- Логику поведения компьютерных соперников.
- Искусственный интеллект тренеров и менеджеров.
- Алгоритмы принятия решений игроками в матчах.

Ветки разработки
================

- `game-core` – логика симуляции.
- `ui-manager` – интерфейс пользователя.
- `ai-engine` – искусственный интеллект.

Добро пожаловать в мир профессионального тенниса!