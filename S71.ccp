#include <iostream>

class CreditCard {
private:
    int Number;
    float Balance;
    
public:
    // Конструктор
    CreditCard(int num, float bal) : Number(num), Balance(bal) {
        std::cout << "Создана карта №" << Number << " с балансом " << Balance << " Р" << std::endl;
    }
    
    // Метод для пополнения
    void Put(float V) {
        if (V > 0) {
            Balance += V;
            std::cout << "Внесено " << V << " Р на карту №" << Number << std::endl;
        }
    }
    
    // Метод для снятия
    void Take(float V) {
        if (V > 0 && V <= Balance) {
            Balance -= V;
            std::cout << "Снято " << V << " Р с карты №" << Number << std::endl;
        } else {
            std::cout << "Ошибка снятия с карты №" << Number << std::endl;
        }
    }
    
    // Метод для показа баланса
    void ShowBalance() {
        std::cout << "Карта №" << Number << ": баланс = " << Balance << " Р" << std::endl;
    }
};

int main() {
    // Создаем объект как в примере
    CreditCard firstCC(1234, 50);
    
    // Работа с объектом напрямую
    firstCC.Put(100);
    firstCC.Take(30);
    firstCC.ShowBalance();
    
    // Демонстрация обращения к методу по указателю
    std::cout << "\nДемонстрация работы с указателем:\n";
    
    // Создаем указатель на объект
    CreditCard* cardPtr = &firstCC;
    
    // Обращение к методам через указатель с использованием оператора ->
    cardPtr->Put(200);
    cardPtr->Take(50);
    cardPtr->ShowBalance();

    
    return 0;
}
