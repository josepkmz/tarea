#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i <= 999; i++) {
        int d1 = i % 10;
        int d2 = (i / 10) % 10;
        int d3 = i / 100;
        if (d1 * d1 + d2 * d2 + d3 * d3 == i / 3) {
            cout << "Número: " << i << endl;
        }
    }
    return 0;
}