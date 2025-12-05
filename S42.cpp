#include <iostream>
using namespace std;

void sort(int arr[10]) {
    // Сортировка выбором по убыванию
    for (int i = 0; i < 9; i++) {
        // Находим максимальный элемент в неотсортированной части
        int max_idx = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Меняем местами с текущим элементом
        if (max_idx != i) {
            int temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;
        }
    }
}
int main() {
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    
    cout << "Исходный массив: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    sort(a);
    
    cout << "Отсортированный по убыванию: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
