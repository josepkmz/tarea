#include <iostream>
using namespace std;
int main(){
float a, b, c, d, e, f, denominador, x, y;
cout << "introduzca el valor de a: ";
cin>> a;
cout <<"introduzca el valor de b: ";
cin>> b;
cout<< "introduzca el valor de c: ";
cin>> c;
cout << " introduzca el valor de d: ";
cin>> d;
cout <<"introduzca el valor de e: ";
cin>> e;
cout<<"introduzca el valor de f: ";
cin>> f;
denominador = a * e - b * d;
if (denominador == 0)
cout << " no solucion";
else
{
x = (c * e - b * f) / denominador;
y = (a * f - c * d) / denominador;
cout << " la solucion del sistema es";
cout << " x = " << x << " y = " << y << endl;
}
return 0;
} //PARA EL EJRCISIO DUPLICAR LOS VALORES DE F Y D SIEMPRE Y CUANDO LOS VALORES DE A Y C SEAN MENORES A 2
