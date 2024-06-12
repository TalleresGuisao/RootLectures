#include <iostream>
#include <iomanip>
using namespace std;

#include "empleadocomision.h"

int main()
{

  // instancia un objeto EmpleadoPorComision
  EmpleadoPorComision empleado("Oscar", "Usuga", "222-22-2222", 10000, .06 );

  cout << fixed << setprecision( 2 );
  // obtiene los datos del empleado por comisión
  cout << "Informacion del empleado obtenida por las funciones get: \n"
       << "\nEl primer nombre es " << empleado.getPrimerNombre()
       << "\nEl apellido paterno es " << empleado.getApellidoPaterno()
       << "\nEl numero de seguro social es "
       << empleado.getNumeroSeguroSocial()
       << "\nLas ventas brutas son " << empleado.getVentasBrutas()
       << "\nLa tarifa de comision es " << empleado.getTarifaComision() << endl;
  
  empleado.setVentasBrutas( 8000 ); // establece las ventas brutas
  empleado.setTarifaComision( .1 ); // establece la tarifa de comisión

  cout << "\nInformacion actualizada del empleado, mostrada por la funcion imprimir: \n" << endl;
  empleado.imprimir(); // muestra la nueva informacion del empleado
  
  // muestra los ingresos del empleado
  cout << "\n\nIngresos del empleado: $" << empleado.ingresos() << endl;
  return 0;
}
