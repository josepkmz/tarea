#include <iostream>
using namespace std;

int main() {
    int maximo;
    do {
        cout << "Ingrese el valor máximo: ";
        cin >> maximo;
    } while (maximo <= 0);
    int suma = 0, contador = 0;
    for (int i = 1; suma <= maximo; i++) {
        suma += i * i - i - 2;
        contador++;
    }
    cout << "La suma es: " << suma << endl;
    cout << "El número de términos es: " << contador << endl;
    return 0;
}