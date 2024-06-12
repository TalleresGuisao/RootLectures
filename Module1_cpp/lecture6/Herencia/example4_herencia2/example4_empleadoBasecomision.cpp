#include <iostream>
#include <iomanip>
using namespace std;

// definición de la clase EmpleadoBaseMasComision
#include "empleadoBasecomision.h"

int main()
{
  // establece el formato de salida de punto flotante
  cout << fixed << setprecision( 2 );
  
  { 
    EmpleadoPorComision empleado1( "Oscar", "Guisao", "333-33-3333", 5000, .04 );
  } 
  
  cout << endl;
  EmpleadoBaseMasComision empleado2( "Marce", "Sanchez", "555-55-5555", 2000, .06, 800 );
  
  cout << endl;
 EmpleadoBaseMasComision empleado3( "Fidel", "Garduño", "888-88-8888", 8000, .15, 2000 );
 cout << endl;
 
 return 0;
}
