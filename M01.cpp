#include <iostream>

использование пространство имён std;

main int() {
    setlocale(LC_ALL, "RU");
 cout << "Таблица Пифагора (10x10):" << endl;
 cout << "\t"; // Отступ для первого столбца
    
    // Вывод заголовков столбцов
    for (int col = 1; col <= 10; col++) {
 cout << col << "\t";
    }
 cout << endl;
    
    // Вывод строк таблицы
    for (int row = 1; row <= 10; row++) {
 cout << строка << "\t"; // Заголовок строки
        for (int col = 1; col <= 10; col++) {
 cout << строка * столбец << "\t";
        }
 cout << endl;
    }
    0 возврат;
}
