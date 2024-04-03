// Uso del operador unario de resolución de alcance, sirve para utilizar variables globales
#include <iostream>

using std::cout;
using std::endl;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::setiosflags;
using std::setw;

const double PI = 3.14159265358979;

int main()
{
   const float PI = static_cast< float >( ::PI );       // Aca utilizamos la variable global

   cout << setprecision( 20 )
        << "  Valor local float de PI = " << PI         // Aca utilizamos la variable local
        << "\nValor global double de PI = " << ::PI << endl;

   cout << setw( 28 ) << "Valor float local de PI = " 
        << setiosflags( ios::fixed | ios::showpoint )
        << setprecision( 10 ) << PI << endl;

   system("PAUSE");
   return 0;
} // fin de a función main

