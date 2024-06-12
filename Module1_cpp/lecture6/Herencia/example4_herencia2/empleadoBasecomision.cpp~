#include <iostream>
using namespace std;


#include "empleadoBasecomision.h"

// constructor
EmpleadoBaseMasComision::EmpleadoBaseMasComision( const string &nombre, const string &apellido, const string &nss,
						 double ventas, double tarifa, double salario )
  // llama explícitamente al constructor de la clase base
  : EmpleadoPorComision( nombre, apellido, nss, ventas, tarifa )
{
  setSalarioBase( salario ); // valida y almacena el salario base

  /*cout << "Constructor de EmpleadoBaseMasComision: " << endl;
  imprimir();
  cout << "\n\n";*/
}

/*EmpleadoBaseMasComision::~EmpleadoBaseMasComision()
{
cout << "Destructor de EmpleadoBaseMasComision: " << endl;
imprimir();
cout << "\n\n";
}*/

void EmpleadoBaseMasComision::setSalarioBase( double salario )
{
  salarioBase = ( salario < 0.0 ) ? 0.0 : salario;
}

double EmpleadoBaseMasComision::getSalarioBase() const
{
return salarioBase;
}

double EmpleadoBaseMasComision::ingresos() const
{
  // la clase derivada NO puede acceder a los datos privados de la clase base
  //return salarioBase + ( tarifaComision * ventasBrutas );
  
  // la clase derivada SI puede acceder a los datos privados de la clase base  
  return getSalarioBase() + EmpleadoPorComision::ingresos();// NOTE operador de resolución de ámbito 
}

void EmpleadoBaseMasComision::imprimir() const
{
 cout << "con salario base ";

 // invoca a la función imprimir de EmpleadoPorComision
 EmpleadoPorComision::imprimir();

 cout << "\nsalario base: " << getSalarioBase();
}
