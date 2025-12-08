#include <iostream>
#include <fstream>

int main() {
    int A, B;
    
    std::cout << "Введите число A: ";
    std::cin >> A;
    
    std::cout << "Введите число B (B > A): ";
    std::cin >> B;
    
    if (B <= A) {
        std::cout << "Ошибка: B должно быть больше A!" << std::endl;
        return 1;
    }
    
    std::ofstream outFile("output.txt");
    if (!outFile) {
        std::cout << "Ошибка создания файла!" << std::endl;
        return 1;
    }
    
    std::cout << "\nЗаписываю результаты в файл 'output.txt'...\n" << std::endl;
    
    // Вариант 1: запись только результатов умножения
    for (int i = A; i <= B; i++) {
        outFile << i * 3 << std::endl;
    }
    
    // Вариант 2: запись в одну строку через пробел
    /*
    for (int i = A; i <= B; i++) {
        outFile << i * 3 << " ";
    }
    outFile << std::endl;
    */
    
    outFile.close();
    std::cout << "Готово! Проверьте файл 'output.txt'." << std::endl;
    
    return 0;
}
