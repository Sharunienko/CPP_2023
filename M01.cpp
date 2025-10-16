#include <iostream>

using namespace std;

int main() {
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
 cout << row << "\t"; // Заголовок строки
        for (int col = 1; col <= 10; col++) {
 cout << row * col << "\t";
        }
 cout << endl;
    }
    return 0;
}
