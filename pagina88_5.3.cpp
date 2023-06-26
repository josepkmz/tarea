#include <iostream>
using namespace std;

int main() {
    int numero, positivo = 0, negativo = 0, cero = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        if (numero > 0) {
            positivo++;
        } else if (numero < 0) {
            negativo++;
        } else {
            cero++;
        }
    }
    cout << "El número de entradas positivas es: " << positivo << endl;
    cout << "El número de entradas negativas es: " << negativo << endl;
    cout << "El número de entradas cero es: " << cero << endl;
    return 0;
}