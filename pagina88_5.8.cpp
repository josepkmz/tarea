#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (double x = 0; x <= 5; x += 0.5) {
        double resultado = cos(3 * x) - 2 * x;
        cout << "Para x = " << x << ", el resultado es: " << resultado << endl;
    }
    return 0;
}