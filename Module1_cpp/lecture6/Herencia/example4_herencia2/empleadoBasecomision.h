#ifndef BASEMAS_H
#define BASEMAS_H

#include <string> 
using namespace std;

#include "../example1_clasebase2/empleadocomision.h"

class EmpleadoBaseMasComision : public EmpleadoPorComision // NOTE: LOS ":" Y EL "PUBLIC" PARA INDICAR LA HERENCIA
{
 public:
  EmpleadoBaseMasComision( const string &, const string &,
			   const string &, double = 0.0, double = 0.0, double = 0.0 );
  ~EmpleadoBaseMasComision();
  
  void setSalarioBase( double ); 
  double getSalarioBase() const; 
  
  double ingresos() const; 
  void imprimir() const; 
  
 private:
  double salarioBase; 
}; 
#endif
