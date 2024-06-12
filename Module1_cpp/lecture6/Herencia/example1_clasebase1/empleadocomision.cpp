#include <iostream>
using namespace std;

#include "empleadocomision.h"

EmpleadoPorComision::EmpleadoPorComision( const string &nombre, const string &apellido, const string &nss,
					 double ventas, double tarifa )
{
  primerNombre = nombre; // debe validar
  apellidoPaterno = apellido; 
  numeroSeguroSocial = nss;
  setVentasBrutas( ventas ); // valida y almacena las ventas brutas
  setTarifaComision( tarifa ); 
}

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
  return tarifaComision * ventasBrutas;
}

void EmpleadoPorComision::imprimir() const
{
  cout << "empleado por comision: " << primerNombre << ' ' << apellidoPaterno
       << "\nnumero de seguro social: " << numeroSeguroSocial
       << "\nventas brutas: " << ventasBrutas
       << "\ntarifa de comision: " << tarifaComision;
}


