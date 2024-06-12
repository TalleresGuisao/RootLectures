#include <iostream>
#include "NumeroTelefonico.h"

using namespace std;

int main()
{
  NumeroTelefonico telefono; // crea el objeto telefono
  
  cout << "Escriba el numero telefonico en la forma (123) 456-7890:" << endl;
  // cin >> telefono invoca a operator>> generando de manera implícita
  // la llamada a la función global operator>>( cin, telefono )
  cin >> telefono;
  
  cout << "El numero telefonico introducido fue: ";
  // cout << telefono invoca a operator<< generando de manera implícita
  // la llamada a la función global operator<<( cout, telefono )
  cout << telefono << endl;
  return 0;
}
