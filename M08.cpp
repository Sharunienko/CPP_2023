#include <iostream>
#include <cmath>
#include <stdexcept>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double get_angle(double a, double b, double c) {
    // Проверка на корректность значений аргументов
    if (a <= 0 || b <= 0 || c <= 0) {
        throw std::invalid_argument("Все стороны треугольника должны быть положительными");
    }
    
    // Проверка неравенства треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        throw std::invalid_argument("Неравенство треугольника не выполняется");
    }
    
    // Используем теорему косинусов:
    // a² = b² + c² - 2bc*cos(α), где α - угол напротив стороны a
    // cos(α) = (b² + c² - a²) / (2bc)
    
    double cos_alpha = (b * b + c * c - a * a) / (2 * b * c);
    
    // Проверка на диапазон косинуса (из-за погрешностей вычислений)
    if (cos_alpha < -1.0) cos_alpha = -1.0;
    if (cos_alpha > 1.0) cos_alpha = 1.0;
    
    // Находим угол в радианах, затем преобразуем в градусы
    double alpha_rad = acos(cos_alpha);
    double alpha_deg = alpha_rad * 180.0 / M_PI;
    
    return alpha_deg;
}

int main() {
    try {
        // Тестовый пример из задания
        std::cout << "Угол напротив стороны 5 в треугольнике (5,4,3): " 
                  << get_angle(5., 4., 3.) << " градусов" << std::endl;
        
        // Дополнительные примеры
        std::cout << "Тупоугольный треугольник (7,5,3): " 
                  << get_angle(7., 5., 3.) << " градусов" << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
    
    return 0;
}
