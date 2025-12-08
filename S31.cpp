#include <iostream>
#include <string>

int main() {
    // Создаем текстовый массив с названиями цифр
    std::string digitNames[10] = {
        "ноль", "один", "два", "три", "четыре", 
        "пять", "шесть", "семь", "восемь", "девять"
    };
    
    int number;
    
    std::cout << "Введите число от 0 до 9: ";
    std::cin >> number;
    
    // Проверяем, что число в допустимом диапазоне
    if (number >= 0 && number <= 9) {
        std::cout << "Название числа " << number << ": " << digitNames[number] << std::endl;
    } else {
        std::cout << "Ошибка! Введите число от 0 до 9." << std::endl;
    }
    
    return 0;
}
