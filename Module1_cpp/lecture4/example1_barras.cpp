#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int tamanioArreglo = 11;
  
  int n[ tamanioArreglo ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 0 };
  
  cout << "Distribucion de calificaciones:" << endl;
  // para cada elemento del arreglo n, imprime una barra del gráfico
  for ( int i = 0; i < tamanioArreglo; i++ )
    {
      // imprime etiquetas de las barras ("0-9:", ..., "90-99:", "100:" )
      if ( i == 0 )
	cout << " 0-9: ";
      else if ( i == 10 )
	cout << " 100: ";
      else
	cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";
      
      // imprime barra de asteriscos
      for ( int estrellas = 0; estrellas < n[ i ]; estrellas++ ){
	cout << '*';
      }
      cout << endl;
      
    }

 return 0; 
} 
