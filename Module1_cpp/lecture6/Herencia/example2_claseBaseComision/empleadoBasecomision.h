#ifndef BASEMAS_H
#define BASEMAS_H

#include <string>

using namespace std;

class EmpleadoBaseMasComision
{
public:
  EmpleadoBaseMasComision( const string &, const string &,
			   const string &, double = 0.0, double = 0.0, double = 0.0 );
  void setPrimerNombre( const string & ); 
  string getPrimerNombre() const;
  
  void setApellidoPaterno( const string & ); 
  string getApellidoPaterno() const;
  
  void setNumeroSeguroSocial( const string & ); 
  string getNumeroSeguroSocial() const;
  
  void setVentasBrutas( double ); 
  double getVentasBrutas() const;
  
  void setTarifaComision( double ); 
  double getTarifaComision() const;
  
  void setSalarioBase( double ); 
  double getSalarioBase() const; 
  double ingresos() const;
  void imprimir() const;
  
 private:
  string primerNombre;
  string apellidoPaterno;
  string numeroSeguroSocial;
  double ventasBrutas; 
  double tarifaComision; 
  double salarioBase; // salario base
};

#endif
