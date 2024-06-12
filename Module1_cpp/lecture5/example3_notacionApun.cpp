#include <iostream>
#include <iomanip>

using namespace std; 

int main() 
{
  int b[] = { 10, 20, 30, 40 }; 
  int *bPtr = b;
  
  // imprime el arreglo b usando la notación de subíndice de arreglo
  cout << "Se imprime el arreglo b con:\n\nNotacion de subindice de arreglo\n";
  
  for ( int i = 0; i < 4; i++ ){
    cout << "b[" << i << "] = " << b[ i ] << '\n';
  }

  // imprime el arreglo b usando el nombre del arreglo y la notación apuntador/desplazamiento
  cout << "\nNotacion apuntador/desplazamiento en donde "
       << "el apuntador es el nombre del arreglo\n";

  for ( int desplazamiento1 = 0; desplazamiento1 < 4; desplazamiento1++ ){
    cout << "*(b + " << desplazamiento1 << ") = " << *( b + desplazamiento1 ) << '\n';
  }

  // imprime el arreglo b usando bPtr y la notación de subíndice de arreglo
  cout << "\nNotacion de subindice de apuntador\n";
  for ( int j = 0; j < 4; j++ ){
    cout << "bPtr[" << j << "] = " << bPtr[ j ] << '\n';
  }

  cout << "\nNotacion apuntador/desplazamiento\n";
  // imprime el arreglo b usando bPtr y la notación apuntador/desplazamiento
  for ( int desplazamiento2 = 0; desplazamiento2 < 4; desplazamiento2++ ){
    cout << "*(bPtr + " << desplazamiento2 << ") = "
	 << *( bPtr + desplazamiento2 ) << '\n';
  }
  
  return 0; 
}
