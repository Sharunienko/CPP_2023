#include <iostream>

void reverse(const char* str) {
    if (str == nullptr) {
        std::cout << "(nullptr)" << std::endl;
        return;
    }
    
    // Находим конец строки
    const char* end = str;
    while (*end != '\0') {
        end++;
    }
    
    // Двигаемся от конца к началу
    const char* ptr = end - 1;
    while (ptr >= str) {
        std::cout << *ptr;
        ptr--;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Testing -> ";
    reverse("Testing");
    
    std::cout << "gnitseT -> ";
    reverse("gnitseT");
    
    return 0;
}
