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
}

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
  // la clase derivada no puede acceder a los datos privados de la clase base
  return salarioBase + ( tarifaComision * ventasBrutas );
}

void EmpleadoBaseMasComision::imprimir() const
{
  // la clase derivada no puede acceder a los datos privados de la clase base
  cout << "empleado por comision con salario base: " << primerNombre << ' '
       << apellidoPaterno << "\nnumero de seguro social: " << numeroSeguroSocial
       << "\nventas brutas: " << ventasBrutas
       << "\ntarifa de comision: " << tarifaComision
       << "\nsalario base: " << salarioBase;
}
