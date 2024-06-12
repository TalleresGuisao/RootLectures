/*
Cuando una función de operador se implementa como función miembro, 
el operando de más a la izquierda (o el único) 
debe ser un objeto (o una referencia a un objeto) de la clase del operador. 
Si el operando izquierdo debe ser un objeto de una clase distinta o de un tipo fundamental, 
esta función de operador se debe implementar como una función global
(como haremos en este ejemplo, al sobrecargar << y >> como los operadores de inserción de flujo 
y de extracción de flujo, respectivamente). 
Una función de operador global puede convertirse en friend de una clase, si esa función debe aceptar
directamente miembros private o protected de esa clase.
 */


#ifndef NUMEROTELEFONICO_H
#define NUMEROTELEFONICO_H

#include <iostream>
#include <string>

using namespace std;

class NumeroTelefonico
{
  friend ostream &operator<<( ostream &, const NumeroTelefonico & );
  friend istream &operator>>( istream &, NumeroTelefonico & );
  
 private:
  string codigoArea; // código de área de 3 dígitos
  string intercambio; // intercambio de 3 dígitos
  string linea; // línea de 4 dígitos
};

#endif
