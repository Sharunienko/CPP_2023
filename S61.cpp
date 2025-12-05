#include <iostream>

class Bucket {
private:
    double volume;  // общий объем
    double used;    // занятый объем
    
public:
    // Конструктор
    Bucket(double vol) {
        if (vol <= 0) {
            // В простом случае можно не выбрасывать исключение,
            // а установить значение по умолчанию
            volume = 10.0;
        } else {
            volume = vol;
        }
        used = 0.0;
    }
    
    // Опустошить ведро
    void flush() {
        used = 0.0;
    }
    
    // Наполнить ведро
    double fill(double v) {
        if (v <= 0) return 0.0;  // ничего не добавляем
        
        double free_space = volume - used;
        
        if (v <= free_space) {
            used += v;
            return 0.0;  // вся жидкость поместилась
        } else {
            used = volume;  // заполняем до краев
            return v - free_space;  // возвращаем то, что не поместилось
        }
    }
    
    // Дополнительные методы для удобства тестирования
    double getVolume() const { return volume; }
    double getUsed() const { return used; }
};

int main() {
    // Пример использования из условия
    Bucket bucket(15.0);  // ведро объемом 15 литров
    
    std::cout << "Объем ведра: " << bucket.getVolume() << " л.\n";
    std::cout << "Сейчас в ведре: " << bucket.getUsed() << " л.\n\n";
    
    // Тест 1: Наливаем 10 литров
    double overflow = bucket.fill(10.0);
    std::cout << "Налили 10 л. Перелив: " << overflow << " л.\n";
    std::cout << "Теперь в ведре: " << bucket.getUsed() << " л.\n\n";
    
    // Тест 2: Наливаем еще 8 литров
    overflow = bucket.fill(8.0);
    std::cout << "Налили еще 8 л. Перелив: " << overflow << " л.\n";
    std::cout << "Теперь в ведре: " << bucket.getUsed() << " л.\n\n";
    
    // Тест 3: Опустошаем ведро
    bucket.flush();
    std::cout << "Опустошили ведро.\n";
    std::cout << "Теперь в ведре: " << bucket.getUsed() << " л.\n\n";
    
    // Тест 4: Пытаемся налить больше, чем объем ведра
    overflow = bucket.fill(20.0);
    std::cout << "Налили 20 л. Перелив: " << overflow << " л.\n";
    std::cout << "Теперь в ведре: " << bucket.getUsed() << " л.\n";
    
    return 0;
}
