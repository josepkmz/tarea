#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
int i = 1 , n ;
cin >> n;
while (i <= n)
if ((i % n) == 0)
++i;
cout << i << endl;
system("PAUSE");
return 0;
}
// la salida en 0 sera 1
// la salida en 1 sera 2
// la salida en 3 te dejara en un bucle infinito  