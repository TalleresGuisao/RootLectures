#include <iostream>
using namespace std;

#include "empleadocomision.h"

EmpleadoPorComision::EmpleadoPorComision( const string &nombre, const string &apellido, const string &nss,
					 double ventas, double tarifa )
  : primerNombre( nombre ), apellidoPaterno( apellido ), numeroSeguroSocial( nss )
{
  //primerNombre = nombre; // debe validar
  //apellidoPaterno = apellido; 
  //numeroSeguroSocial = nss;
  setVentasBrutas( ventas ); // valida y almacena las ventas brutas
  setTarifaComision( tarifa );

  /*cout << "Constructor de EmpleadoPorComision: " << endl;
  imprimir();
  cout << "\n\n";*/
}
/*
EmpleadoPorComision::~EmpleadoPorComision()
{
cout << "Destructor de EmpleadoPorComision: " << endl;
imprimir();
cout << "\n\n";
}
*/

void EmpleadoPorComision::setPrimerNombre( const string &nombre )
{
  primerNombre = nombre; 
}

string EmpleadoPorComision::getPrimerNombre() const
{
  return primerNombre;
}

void EmpleadoPorComision::setApellidoPaterno( const string &apellido )
{
  apellidoPaterno = apellido; 
}


string EmpleadoPorComision::getApellidoPaterno() const
{
  return apellidoPaterno;
}

void EmpleadoPorComision::setNumeroSeguroSocial( const string &nss )
{
  numeroSeguroSocial = nss; 
}

string EmpleadoPorComision::getNumeroSeguroSocial() const
{
  return numeroSeguroSocial;
}

void EmpleadoPorComision::setVentasBrutas( double ventas )
{
  ventasBrutas = ( ventas < 0.0 ) ? 0.0 : ventas;
}

double EmpleadoPorComision::getVentasBrutas() const
{
  return ventasBrutas;
}

void EmpleadoPorComision::setTarifaComision( double tarifa )
{
  tarifaComision = ( tarifa > 0.0 && tarifa < 1.0 ) ? tarifa : 0.0;
}

double EmpleadoPorComision::getTarifaComision() const
{
  return tarifaComision;
}

double EmpleadoPorComision::ingresos() const
{
  //return tarifaComision * ventasBrutas;
  return getTarifaComision() * getVentasBrutas();
}

void EmpleadoPorComision::imprimir() const
{
  cout << "empleado por comision: " << getPrimerNombre() << ' ' << getApellidoPaterno()
       << "\nnumero de seguro social: " << getNumeroSeguroSocial()
       << "\nventas brutas: " << getVentasBrutas()
       << "\ntarifa de comision: " << getTarifaComision();
}


