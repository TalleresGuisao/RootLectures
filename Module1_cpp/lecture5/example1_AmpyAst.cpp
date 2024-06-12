#include <iostream> 
using namespace std; 


int main() 
{
  int a; 
  int *aPtr; // aPtr es un int * -- apuntador a un entero
  
  a = 7;
  
  aPtr = &a; // aca  asignamos la dirección de "a" a "aPtr"
  
  cout << "La direccion de a es " << &a
       << "\nEl valor de aPtr es " << aPtr;
  
  cout << "\n\nEl valor de a es " << a
       << "\nEl valor de *aPtr es " << *aPtr;
  
  cout << "\n\nDemostracion de que * y & son inversos "
       << "uno del otro.\n&*aPtr = " << &*aPtr
       << "\n*&aPtr = " << *&aPtr << endl;

  return 0; 
}   
