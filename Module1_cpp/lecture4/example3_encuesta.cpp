/*
Se pidió a cuarenta estudiantes que calificaran la calidad de la comida en la cafetería de la piscina, en una escala
del 1 al 10 (donde 1 significa pésimo y 10 significa excelente). Coloque las 40 respuestas en un arreglo entero
y sintetice los resultados de la encuesta.
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  
  const int tamanioRespuesta = 40; 
  const int tamanioFrecuencia = 11; 
  
  const int respuestas[ tamanioRespuesta ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8,
					       10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
					       5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
  
  int frecuencia[ tamanioFrecuencia ] = {};

  // para cada respuesta, selecciona el elemento de respuestas y usa ese valor
  // como subíndice de frecuencia para determinar el elemento a incrementar
  for ( int jj = 0; jj < tamanioRespuesta; jj++ ){
    frecuencia[ respuestas[ jj ] ]++; // NOTE: A[i]= A[i]+1;
  }
  
  cout << "Calificacion" << setw( 17 ) << "Frecuencia" << endl;

  for ( int calificacion = 1; calificacion < tamanioFrecuencia; calificacion++ ){
    cout << setw( 12 ) << calificacion << setw( 17 ) << frecuencia[ calificacion ] << endl;
  }
  
  return 0;

}
