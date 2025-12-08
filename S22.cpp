#include <iostream>
#include <fstream>

int main() {
    // Открываем файл для чтения
    std::ifstream in("output.txt");
    
    if (!in) {
        std::cerr << "Файл 'output.txt' не найден!" << std::endl;
        return 1;
    }
    
    int num;
    int count = 0;
    
    std::cout << "Числа из файла:" << std::endl;
    
    // Читаем числа до конца файла
    while (in >> num) {
        count++;
        std::cout << count << ". Число: " << num << std::endl;
    }
    
    in.close();
    
    if (count == 0) {
        std::cout << "В файле нет чисел или он пуст." << std::endl;
    }
    
    return 0;
}
