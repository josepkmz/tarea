#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;
    int numero, mayor, menor, suma = 0;
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        if (i == 1) {
            mayor = numero;
            menor = numero;
        } else {
            if (numero > mayor) {
                mayor = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
        suma += numero;
    }
    double media = (double) suma / n;
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
    cout << "La media de los números es: " << media << endl;
    return 0;
}