#include <iostream>

// Функция, возвращающая квадрат суммы двух дробных чисел
double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    // Тестирование функции
    std::cout << "squared_sum(12, 6) = " << squared_sum(12, 6) << "\n";       // 324
    std::cout << "squared_sum(12, -6) = " << squared_sum(12, -6) << "\n";     // 36
    
    // Дополнительные тесты
    std::cout << "squared_sum(0, 0) = " << squared_sum(0, 0) << "\n";         // 0
    std::cout << "squared_sum(1.5, 2.5) = " << squared_sum(1.5, 2.5) << "\n"; // 16
    std::cout << "squared_sum(-3, -4) = " << squared_sum(-3, -4) << "\n";     // 49
    
    return 0;
}
