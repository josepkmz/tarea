#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de términos: ";
    cin >> n;
    float suma = 0;
    for (int i = 1; i <= n; i++) {
        float termino = i * i / pow(3, i);
        suma += termino;
    }
    cout << "La suma de los " << n << " primeros términos es: " << suma << endl;
    return 0;
}