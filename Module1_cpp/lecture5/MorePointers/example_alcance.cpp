#include <iostream>
using namespace std; 

class Cuenta
{
public: // los datos public son peligrosos
  void setX( int valor )
  {
    x = valor;
  } 
  // imprime el valor del miembro de datos private x
  void imprimir()
  {
    cout << x << endl;
  } 
private:
  int x;
};

int main()
{
  Cuenta contador; // crea objeto contador
  Cuenta &contadorRef = contador; // crea referencia a contador
  Cuenta *contadorPtr = &contador; // crea apuntador a contador

  cout << "Establecer x en 1 e imprimir usando el nombre del objeto: ";
  contador.setX( 1 ); 
  contador.imprimir(); 
  
  cout << "Establecer x en 2 e imprimir usando una referencia a un objeto: ";
  contadorRef.setX( 2 ); 
  contadorRef.imprimir(); 
  
  cout << "Establecer x en 3 e imprimir usando un apuntador a un objeto: ";
  //contadorPtr->setX( 3 );
  //contadorPtr->imprimir();
  (*contadorPtr).setX( 3 );
  (*contadorPtr).imprimir(); 
  return 0;
}

/*
La sintaxis (*puntero).miembro es incómoda de leer y escribir, así que se decidió usar la sintaxis flecha (->) 
de manera que puntero->miembro fuese equivalente a (*puntero).miembro. Ambas opciones son usables 
tanto en C como en C++ pero se aconseja usar el operador flecha (->) por ser más claro.
*/
