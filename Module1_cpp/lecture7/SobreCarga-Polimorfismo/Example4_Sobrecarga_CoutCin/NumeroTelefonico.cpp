#include <iomanip>
#include "NumeroTelefonico.h"

// operador de inserción de flujo sobrecargado; no puede ser
// una función miembro si deseamos invocarlo con
// cout << unNumeroTelefonico;
ostream &operator<<( ostream &salida, const NumeroTelefonico &numero )
{
  salida << "(" << numero.codigoArea << ") "
	 << numero.intercambio << "-" << numero.linea;
  return salida; // permite cout << a << b << c;
}

// operador de extracción de flujo sobrecargado; no puede ser
// una función miembro si deseamos invocarlo con
// cin >> unNumeroTelefonico;
istream &operator>>( istream &input, NumeroTelefonico &numero )
{
  input.ignore(); // omite (
  input >> setw( 3 ) >> numero.codigoArea; // recibe el código de área
  input.ignore( 2 ); // omite ) y espacio
  input >> setw( 3 ) >> numero.intercambio; // recibe intercambio
  input.ignore(); // omite el guión corto (-)
  input >> setw( 4 ) >> numero.linea; // recibe linea
  return input; // permite cin >> a >> b >> c;
}
