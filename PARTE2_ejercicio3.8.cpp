#include <iostream>
using namespace std;

int main() {
    float cantidad;
    int euros, centimos, billete_200, billete_100, billete_50, billete_20, billete_10, billete_5, moneda_2, moneda_1, moneda_50, moneda_20, moneda_10, moneda_5, moneda_2cent, moneda_1cent;

    cout << "Ingrese la cantidad en euros: ";
    cin >> cantidad;

    euros = static_cast<int>(cantidad);
    centimos = static_cast<int>((cantidad - euros) * 100);

    billete_200 = euros / 200;
    euros %= 200;
    billete_100 = euros / 100;
    euros %= 100;
    billete_50 = euros / 50;
    euros %= 50;
    billete_20 = euros / 20;
    euros %= 20;
    billete_10 = euros / 10;
    euros %= 10;
    billete_5 = euros / 5;
    euros %= 5;
    moneda_2 = euros / 2;
    euros %= 2;
    moneda_1 = euros;

    moneda_50 = centimos / 50;
    centimos %= 50;
    moneda_20 = centimos / 20;
    centimos %= 20;
    moneda_10 = centimos / 10;
    centimos %= 10;
    moneda_5 = centimos / 5;
    centimos %= 5;
    moneda_2cent = centimos / 2;
    centimos %= 2;
    moneda_1cent = centimos;

    cout << "Billetes y monedas:" << endl;
    cout << "Billetes de 200 euros: " << billete_200 << endl;
    cout << "Billetes de 100 euros: " << billete_100 << endl;
    cout << "Billetes de 50 euros: " << billete_50 << endl;
    cout << "Billetes de 20 euros: " << billete_20 << endl;
    cout << "Billetes de 10 euros: " << billete_10 << endl;
    cout << "Billetes de 5 euros: " << billete_5 << endl;
    cout << "Monedas de 2 euros: " << moneda_2 << endl;
    cout << "Monedas de 1 euro: " << moneda_1 << endl;
    cout << "Monedas de 50 centimos: " << moneda_50 << endl;
    cout << "Monedas de 20 centimos: " << moneda_20 << endl;
    cout << "Monedas de 10 centimos: " << moneda_10 << endl;
    cout << "Monedas de 5 centimos: " << moneda_5 << endl;
    cout << "Monedas de 2 centimos: " << moneda_2cent << endl;
    cout << "Monedas de 1 centimo: " << moneda_1cent << endl;

    return 0;
}