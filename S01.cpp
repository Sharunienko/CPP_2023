#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int integerNum = 15;
    double doubleNum = 7.5;
    float floatNum = 3.6f;
    short shortNum = 4;

 cout << "Исходные переменные:" << endl;
 cout << "Целое число = " << integerNum << endl;
 cout << "Дробное число = " << doubleNum << endl;
 cout << "Число с плавающей точкой = " << floatNum << endl;
 cout << "Целое короткое число = " << shortNum << endl;
 cout << endl;

 cout << "1. Сложение:" << endl;
    double sum = integerNum + doubleNum;
 cout << integerNum << " + " << doubleNum << " = " << sum << endl;

    float sum2 = floatNum + shortNum;
 cout << floatNum << " + " << shortNum << " = " << sum2 << endl;
 cout << endl;

 cout << "2. Вычитание:" << endl;
    int разность = integerNum - shortNum;
 cout << integerNum << " - " << shortNum << " = " << разность << endl;

    double разность2 = doubleNum - floatNum;
 cout << doubleNum << " - " << floatNum << " = " << разность2 << endl;
 cout << endl;

 cout << "3. Умножение:" << endl;
    double произведение = integerNum * doubleNum;
 cout << integerNum << " * " << doubleNum << " = " << произведение << endl;

    float произведение2 = floatNum * shortNum;
 cout << floatNum << " * " << shortNum << " = " << произведение2 << endl;
 cout << endl;

 cout << "4. Деление:" << endl;
    double частное = integerNum / doubleNum;
 cout << integerNum << " / " << doubleNum << " = " << частное << endl;

    int integerDiv = integerNum / shortNum;
 cout << integerNum << " / " << shortNum << " = " << integerDiv << endl;

    float quotient2 = floatNum / shortNum;
 cout << floatNum << " / " << shortNum << " = " << quotient2 << endl;

    return 0;
}
