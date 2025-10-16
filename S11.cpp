#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int i = 0;
    while (i <= 100) {
        if (i % 3 == 0) {
            cout << i << "\t";
        }
        i++;
    }
    return 0;
}
