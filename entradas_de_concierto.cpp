
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
        case 1:
            cout << "Ud. eligió general." << endl;
            precio = 50;
            break;
        case 2:
            cout << "Ud. eligió preferencial." << endl;
            precio = 80;
            break;
        case 3:
            cout << "Ud. eligió platea." << endl;
            precio = 120;
            if (cantidad > 10) {
                cout << "¡Felicitaciones! Usted ha ganado una membresía con un descuento del 5% en su próxima compra." << endl;
            }
            break;
        case 4:
            cout << "Ud. eligió VIP." << endl;
            precio = 160;
            if (cantidad * precio > 330) {
                cout << "Lo sentimos, no puede elegir ninguna bebida porque la suma de las entradas VIP no supera los 330 soles." << endl;
            } else {
                cout << "Elija una bebida gaseosa: " << endl;
                cout << "Elija una bebida cerveza: " << endl;
                cout << "Elija una bebida agua: " << endl;
                cin >> bebida;
            }
            break;
        default:
            cout << "Opción inválida." << endl;
            return 0;
    }
    total = precio * cantidad;
    cout << "El total a pagar es: $" << total << endl;
    if (ubicacion == 4 && cantidad * precio <= 330) {
        cout << "Lo sentimos, no puede elegir ninguna bebida porque la suma de las entradas VIP no supera los 330 soles." << endl;
    } else if (ubicacion == 4) {
        cout << "Bebida seleccionada: " << bebida << endl;
    }
    return 0;
}// MODIFIQUE EL EJERCICIO PARA EL CASO QUE SI LA SUMA DE LAS ENTRADAS VIP NO SUPERA LOS 330 SOLES, NO PODRAN ELEGIR NINGUNA BEBIDA
//Y QUE SI COMPRAN ENTRADAS EN PLATEA SUPERIORES A 10, SE LES OTORGA UNA MENBRESIA CON UN DESCUENTO DEL 5% EN LA PROXIMA COMORA
