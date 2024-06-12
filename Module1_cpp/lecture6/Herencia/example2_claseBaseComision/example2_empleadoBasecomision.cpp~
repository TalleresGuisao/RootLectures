#include <iostream>
#include <iomanip>
using namespace std;

#include "empleadoBasecomision.h"

int main()
{
  // instancia un objeto EmpleadoBaseMasComision
  EmpleadoBaseMasComision empleado( "Cristian", "Gutierrez", "333-33-3333", 5000, .04, 300 );
  
  // establece el formato de salida de punto flotante
  cout << fixed << setprecision( 2 );

  cout << "Informacion del empleado obtenida por las funciones get: \n"
       << "\nEl primer nombre es " << empleado.getPrimerNombre()
       << "\nEl apellido paterno es " << empleado.getApellidoPaterno()
       << "\nEl numero de seguro social es "
       << empleado.getNumeroSeguroSocial()
       << "\nLas ventas brutas son " << empleado.getVentasBrutas()
       << "\nLa tarifa de comision es " << empleado.getTarifaComision()
       << "\nEl salario base es " << empleado.getSalarioBase() << endl;
  
  empleado.setSalarioBase( 1000 ); // establece el salario base
  cout << "\nInformacion actualizada del empleado, impresa por la funcion imprimir: \n"  << endl;
  empleado.imprimir(); // muestra la nueva informacion del empleado
  
  // muestra los ingresos del empleado
  cout << "\n\nIngresos del empleado: $" << empleado.ingresos() << endl;
  
  return 0;
}
