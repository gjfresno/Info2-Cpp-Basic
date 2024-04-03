// Uso del operador ?
#include <iostream>

using std::cout;
using std::cin;
using std::ios;

int main()
{
    char d;

   	cout << "Introduzca:  ";
    cin >> d;
      
    (d > 5) ? (cout << "Menor a 5") : (cout << "Mayor a 5");

    system("PAUSE");
    return 0;
} // fin de a función main

