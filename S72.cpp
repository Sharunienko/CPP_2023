#include <iostream>

class CreditCard {
public:
    int Number;
    float Balance;
    
    CreditCard(int num, float bal) : Number(num), Balance(bal) {}
    
    void ShowBalance() const {
        std::cout << "Карта " << Number << ": " << Balance << " Р" << std::endl;
    }
};

bool Transfer(CreditCard& C1, CreditCard& C2, float V) {
    // Проверка на одну и ту же карту
    if (C1.Number == C2.Number) {
        std::cout << "Ошибка: это одна и та же карта!" << std::endl;
        return false;
    }
    
    // Проверка корректности суммы
    if (V <= 0) {
        std::cout << "Ошибка: сумма должна быть положительной!" << std::endl;
        return false;
    }
    
    // Проверка достаточности средств
    if (V > C1.Balance) {
        std::cout << "Ошибка: недостаточно средств на карте " << C1.Number << std::endl;
        return false;
    }
    
    // Выполняем перевод
    C1.Balance -= V;
    C2.Balance += V;
    
    std::cout << "Перевод " << V << " Р с карты " << C1.Number 
              << " на карту " << C2.Number << " выполнен успешно!" << std::endl;
    
    return true;
}

int main() {
    CreditCard card1(1234, 500);
    CreditCard card2(5678, 200);
    
    card1.ShowBalance();
    card2.ShowBalance();
    
    Transfer(card1, card2, 100);
    
    card1.ShowBalance();
    card2.ShowBalance();
    
    // Тест ошибок
    Transfer(card1, card1, 50);      // та же карта
    Transfer(card1, card2, 1000);    // недостаточно средств
    Transfer(card1, card2, -10);     // отрицательная сумма
    
    return 0;
}
