#include <iostream>
using namespace std;

int main() {
    int limite_maximo, base;
    do {
        cout << "Ingrese el límite máximo : ";
        cin >> limite_maximo;
    } while (limite_maximo <= 0);
    do {
        cout << "Ingrese la base : ";
        cin >> base;
    } while (base <= 0);
    int potencia = 1;
    for (int i = 1; potencia <= limite_maximo; i++) {
        cout << potencia << endl;
        potencia *= base;
    }
    return 0;
}