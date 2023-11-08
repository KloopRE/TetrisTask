﻿# Реализовать примитивную версию тетриса.

В реализации обязательно должны использоваться `Q_PROPERTY` для инициализации размера поля (смотреть пример на гитхабе).

## Интерфейс
1. Игровое поле
   - сетка тетриса, отвечающая за рисование фигур. Обязательно виджетом поля должен быть пользовательский класс, где присутствую два `Q_PROPERTY` (количество строк / столбцов сетки).
         
3. Следующая фигура.
   - Помимо текущей падающей фигуры в поле, необходимо отдельно показывать следующую фигуру, которая появится, как только текущая упадет.
   - Кроме изображения фигуры обязательно должна быть и подпись о том, что это такое
4. Счетчик
   - В игре необходимо подсчитывать очки, для этого необходимо создать счетчик. Какой из виджетов выбрать для отображения – решать вам. Можно, к примеру, использовать `QLCDNumber`.
   - Подпись того, что это счетчик очков – обязательна.
5. Кнопки
   - Начать новую игру
   - Выйти
6. Меню `QMenuBar`
   - Игра `QMenu`
     - Начать новую игру `QAction`
     - Выйти `QAction`
   - Справка - выводит информацию о правилах и управлении (кнопках)

## Требования
- Фигуры должны быть разного размера 1-4  клетки. Используйте примитивную фигуру (1 - 4 вертикальные клетки).
- Движение фигур должно происходить автоматически (возможно, с помощью `QTimer`)
- Должна быть возможность двигать фигуру по сетке горизонтально.
- Должна быть возможность ускорить падение фигуры (уронить ее). Можно как моментально, так и просто ускоренно. Второй вариант предпочтительнее.
- Заполненные линии должны исчезать, а все остальные фигуры падать вниз (аналогично, как это происходит в обычном тетрисе)

## Правила игры 
Очки начисляются по собранным линиям. 
Количество очков за собранную линию можете выбрать произвольно.
      
# Доп.
1. Добавить в реализацию фигуры разной геометрии
2. Добавить в реализацию возможность поворота фигуры
