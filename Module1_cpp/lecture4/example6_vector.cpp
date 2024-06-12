#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void imprimirVector( const vector< int > & ); // muestra el vector
void recibirVector( vector< int > & ); // introduce los valores en el vector

int main(){

  vector< int > enteros1( 7 ); 
  vector< int > enteros2( 10 );
  
  cout << "El tamanio del vector enteros1 es " << enteros1.size()
       << "\nvector despues de la inicializacion:" << endl;
  
  imprimirVector( enteros1 );
  
  cout << "\nEl tamanio del vector enteros2 es " << enteros2.size()
       << "\nvector despues de la inicializacion:" << endl;
  imprimirVector( enteros2 );

  // recibe e imprime enteros1 y enteros2
  cout << "\nEscriba 17 enteros:" << endl;
  recibirVector( enteros1 );
  recibirVector( enteros2 );
  
  cout << "\nDespues de la entrada, los vectores contienen:\n"
       << "enteros1:" << endl;
  imprimirVector( enteros1 );
  
  cout << "enteros2:" << endl;
  imprimirVector( enteros2 );
  
  // usa el operador de desigualdad (!=) con objetos vector
  cout << "\nEvaluacion: enteros1 != enteros2" << endl;
  if ( enteros1 != enteros2 )
    cout << "enteros1 y enteros2 no son iguales" << endl;

  // crea el vector enteros3 usando enteros1 como un
  vector< int > enteros3( enteros1 ); // constructor de copia
  cout << "\nEl tamanio del vector enteros3 es " << enteros3.size()
       << "\nvector despues de la inicializacion:" << endl;
  imprimirVector( enteros3 );
  
  // usa el operador de asignacion (=) con objetos vector
  cout << "\nAsignacion de enteros2 a enteros1:" << endl;
  enteros1 = enteros2; // asigna enteros2 a enteros1
  
  cout << "enteros1:" << endl;
  imprimirVector( enteros1 );
  cout << "enteros2:" << endl;
  imprimirVector( enteros2 );

 
  
  // usa el operador de igualdad (==) con objetos vector
  cout << "\nEvaluacion: enteros1 == enteros2" << endl;
  if ( enteros1 == enteros2 )
    cout << "enteros1 y enteros2 son iguales" << endl;
  
  // usa corchetes para crear rvalue
  cout << "\nenteros1[5] es " << enteros1[ 5 ];
  
  // usa corchetes para crear lvalue
  cout << "\n\nAsignacion de 1000 a enteros1[5]" << endl;
  enteros1[ 5 ] = 1000;
  cout << "enteros1:" << endl;
  imprimirVector( enteros1 );

  // intenta usar subíndice fuera de rango
  cout << "\nIntento de asignar 1000 a enteros1.at( 15 )" << endl;
  //enteros1.at( 15 ) = 1000; // ERROR: fuera de rango
  //return 0;

}

// imprime el contenido del vector
void imprimirVector( const vector< int > &arreglo )
{
  size_t i; 
  for ( i = 0; i < arreglo.size(); i++ )
    {
      cout << setw( 12 ) << arreglo[ i ];
      if ( ( i + 1 ) % 4 == 0 ) // 4 números por fila de resultados
	cout << endl;
    } // fin de for
  if ( i % 4 != 0 )
    cout << endl;
}

// recibe el contenido del vector
void recibirVector( vector< int > &arreglo )
{
  for ( size_t i = 0; i < arreglo.size(); i++ ){
    cin >> arreglo[ i ];
  }
}




  

  
