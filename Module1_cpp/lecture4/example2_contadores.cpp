#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  const int tamanioArreglo = 7; // ignora el elemento cero
  int frecuencia[ tamanioArreglo ] = {};
  
  srand( time( NULL ) );
  
  for ( int tiro = 1; tiro <= 6000000; tiro++ ){
    frecuencia[ 1 + rand() % 6 ]++; // NOTE: es como A[i] con i siendo un numero entre 1-6
  }
  
  cout << "Cara" << setw( 13 ) << "Frecuencia" << endl;
  // imprime el valor de cada elemento del arreglo
  for ( int cara = 1; cara < tamanioArreglo; cara++ ){
    cout << setw( 4 ) << cara << setw( 13 ) << frecuencia[ cara ]<< endl;
  }
  
return 0; 
}
