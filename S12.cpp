#include <iostream>

using namespace std;

int main() {
     int sum = 0;
    
    for (int i = 1; i <= 1000; i += 4) {
        if (i % 7 == 0) {
            sum += i;
        }
    }
    
    cout << "Sum: " << sum << endl;
    return 0;
}
