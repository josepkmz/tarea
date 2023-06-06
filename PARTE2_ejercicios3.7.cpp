#include <iostream>
using namespace std;
int main(){
    int hectometros, decametros, metros, decimetros;
    cout << " Introduzca los hectometros: ";
    cin >> hectometros;
    cout << "introduzca los decametros: ";
    cin>> decametros;
    cout <<" introduzca los metros: ";
    cin >> metros;
    decimetros = ((hectometros * 10 + decametros) * 10 + metros) * 10;
    cout << " el numero de decimetros es "<< decimetros << endl;
    return 0;
}