#include <iostream>
using namespace std;
int main(){
    const float G = 6.673e-8;
    float masa1, masa2, distancia, fuerza;
    cout << " masa 1 en gramos: ";
    cin >> masa1;
    cout << " masa 2 en gramos: ";
    cin >> masa2;
    cout<<"  distancia entre masas en centimetros: ";
    cin >> distancia;
    if (fuerza = G * masa1 * masa2 / (distancia * distancia))
    cout << " la solucion de la Fuerza en dinas es: "<< fuerza << endl;
return 0;
}