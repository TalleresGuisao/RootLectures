#include <iostream> 
using namespace std; 

int cuboPorValor( int );
void cuboPorReferencia( int * );

int main() 
{
  // paso de parametro por valorvalor
 int numero = 5;
 cout << "El valor original de numero es " << numero;
 numero = cuboPorValor( numero );
 cout << "\nEl nuevo valor de numero es " << numero << endl;
 cout << endl;
 
 // paso de parametro por referencia mediante apuntador
 int numero2 = 5;
 cout << "El valor original de numero2 es " << numero2;
 cuboPorReferencia( &numero2 ); // pasa la dirección de numero a cuboPorReferencia
 cout << "\nEl nuevo valor de numero2 es " << numero2 << endl;
 
 return 0; 
}   

int cuboPorValor( int n )
{
  return n * n * n; // eleva al cubo la variable local n y devuelve el resultado
}

// calcula el cubo de *nPtr; modifica la variable numero en main
void cuboPorReferencia( int *nPtr )
{
  *nPtr = *nPtr * *nPtr * *nPtr; // eleva *nPtr al cubo
}
