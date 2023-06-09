#include <iostream>
using namespace std;

int main() {
  int ubicacion, cantidad, precio, total;
    string bebida;
    cout << "Ubicaciones disponibles:" << endl;
    cout << "1. General - 50" << endl;
    cout << "2. Preferencial - 80" << endl;
    cout << "3. Platea - 120" << endl;
    cout << "4. VIP - 160" << endl;
    cout << "Ingrese la ubicación deseada (1-4): ";
    cin >> ubicacion;

    cout << "Ingrese la cantidad de entradas: ";
    cin >> cantidad;

    switch (ubicacion) {
        case 1: cout<<"ud. eligio general: "<<endl;
            precio = 50;
            break;
        case 2: cout<<"ud. escogio preferencial: "<<endl;
            precio = 80;
            break;
        case 3: cout<<"ud. eligio platea: "<<endl;
            precio = 120;
            break;
        case 4: cout<<"ud. eligio vip: "<<endl;
            precio = 160;
            cout <<"elija una bebida gaseosa: " <<endl;
            cout <<"elija una bebida cerveza: " <<endl;
            cout <<"elija una bebida agua: " <<endl;
            cin >> bebida;
            break;
        default:
            cout << "Opción inválida." << endl;
            return 0;
    }

     total = precio * cantidad;
    cout << "El total a pagar es: $" << total << endl;

    if (ubicacion == 4) {
        cout << "Bebida seleccionada: " << bebida << endl;
     } 
    return 0;
}
// MODIFIQUE EL EJERCICIO PARA EL CASO QUE SI LA SUMA DE LAS ENTRADAS VIP NO SUPERA LOS 330 SOLES, NO PODRAN ELEGIR NINGUNA BEBIDA
//Y QUE SI COMPRAN ENTRADAS EN PLATEA SUPERIORES A 10, SE LES OTORGA UNA MENBRESIA CON UN DESCUENTO DEL 5% EN LA PROXIMA COMORA
