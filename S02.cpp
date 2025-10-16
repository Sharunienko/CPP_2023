#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    // Исходные числа 
    int a = 17, b = 5;
    int c = 20, d = 6;
    int e = -17, f = 5;
    int g = 17, h = -5;

    cout << "Деление на цело и остаток от деления" << endl << endl;

    // Примеры
    cout << "Примеры:" << endl;
    cout << a << " / " << b << " = " << (a / b) << endl;
    cout << a << " % " << b << " = " << (a % b) << endl;
    cout << "Проверка: " << b << " * " << (a / b) << " + " << (a % b) << " = " << b * (a / b) + (a % b) << endl;
    cout << endl;

    cout << c << " / " << d << " = " << (c / d) << endl;
    cout << c << " % " << d << " = " << (c % d) << endl;
    cout << "15 / 4 = " << (15 / 4) << endl;
    cout << "15 % 4 = " << (15 % 4) << endl;
    cout << "8 / 2 = " << (8 / 2) << endl;
    cout << "8 % 2 = " << (8 % 2) << endl;
    cout << endl;

    // Отрицательные числа
    cout << "Отрицательные числа:" << endl;
    cout << e << " / " << f << " = " << (e / f) << endl;
    cout << e << " % " << f << " = " << (e % f) << endl;
    cout << g << " / " << h << " = " << (g / h) << endl;
    cout << g << " % " << h << " = " << (g % h) << endl;
    cout << endl;

    return 0;
}
