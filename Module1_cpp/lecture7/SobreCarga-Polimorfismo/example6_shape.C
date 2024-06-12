#include <iostream>
#include <cmath>

using namespace std;
// clase Shape

class Shape {
      public:
         virtual double area() const { return 0.0; }
         virtual double volume() const { return 0.0; }

          //Funciones Virtuales Puras
          //Son funciones virtuales que no tienen cuerpo o implementación y que tampoco se pueden ejecutar.
          // virtual tipo nombre (parámetros) = 0;
  
         // funcion virtual pura sobrepuesta en las clases derivadas
         virtual void print() const=0;
};

////////////////////////////////
// clase TwoDimensionalShape ///
////////////////////////////////

class TwoDimensionalShape : public Shape {
      public:
         virtual void print () const=0;
};

// clase triangulo
class triangulo : public TwoDimensionalShape {
      double lado1, lado2, lado3;
      public:
         triangulo (double=0.0, double=0.0, double=0.0);
         void set_triangulo(double, double, double);
         virtual double area() const;
         virtual void print() const;
};

triangulo :: triangulo (double l1, double l2, double l3){
      set_triangulo(l1,l2,l3);
}

void triangulo :: set_triangulo  (double l1, double l2, double l3){
      lado1= l1 > 0 ? l1 : 0;
      lado2= l2 > 0 ? l2 : 0;
      lado3= l3 > 0 ? l3 : 0;
}

double triangulo :: area () const {
      double s;
      s=(lado1+lado2+lado3)/2;

      return sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
}

void triangulo :: print () const {
      cout << endl << "Triangulo" << endl
      << "Lado 1= " << lado1 << endl
      << "Lado 2= " << lado2 << endl
      << "Lado 3= " << lado3;
}

// clase cuadrado
class cuadrado : public TwoDimensionalShape {
      double lado;
      public:
         cuadrado (double=0.0);
         void set_cuadrado(double);
         virtual double area() const;
         virtual void print() const;
};

cuadrado :: cuadrado (double l) {
      set_cuadrado(l);
}

void cuadrado :: set_cuadrado (double l){
      lado= l>0 ? l : 0;
}

double cuadrado :: area () const {
      return lado*lado;
}

void cuadrado :: print() const {
      cout << endl << "Cuadrado" << endl
            <<"Lado= " << lado;
}

////////////////////////////////
// clase ThreeDimensionalShape /
////////////////////////////////

class ThreeDimensionalShape : public Shape {
      public:
         virtual void print () const=0;
};

// clase cubo
class cubo : public ThreeDimensionalShape {
      double lado;
      public:
         cubo(double=0.0);
         void set_cubo(double);
         virtual double area() const;
         virtual double volume() const;
         virtual void print() const;
};

cubo :: cubo (double l){
      set_cubo(l);
}

void cubo :: set_cubo (double l){
      lado= l>0 ? l : 0;
}

double cubo :: area () const {
      return 6*lado*lado;
}

double cubo :: volume () const {
      return lado*lado*lado;
}

void cubo :: print() const{
      cout << endl << "Cubo" << endl
            <<"Lado= " << lado;
};

// clase paralelepipedo
class paralelepipedo : public ThreeDimensionalShape {
      double largo, ancho, altura;
      public:
         paralelepipedo(double=0.0, double=0.0, double=0.0);
         void set_paralelepipedo(double, double, double);
         virtual double area() const;
         virtual double volume() const;
         virtual void print() const;
};

paralelepipedo :: paralelepipedo (double l, double a, double h){
      set_paralelepipedo(l,a,h);
}

void paralelepipedo :: set_paralelepipedo (double l, double a, double h){
      largo= l>0 ? l : 0;
      ancho= a>0 ? a : 0;
      altura= h>0 ? h : 0;
}

double paralelepipedo :: area () const {
      return 2*largo*ancho + 4*ancho*altura;
}

double paralelepipedo :: volume () const {
      return largo*ancho*altura;
}

void paralelepipedo :: print() const{
      cout << endl <<"Paralelep¡pedo" << endl
            <<"Largo= " << largo << endl 
            <<"Ancho= " << ancho << endl
           <<"Altura= " << altura;
}

// llama a funcion virtual a partir del apuntador de clase base
// utilizando enlace dinamico
void virtualViaPointer (const Shape* baseClassPtr){
      baseClassPtr->print();
      cout << endl <<"Area= " << baseClassPtr->area() << endl
            <<"Volumen= " << baseClassPtr->volume() << endl;
}

// llama a funcion virtual a partir de referencia a clase base
// utilizando enlace dinamico
void virtualViaReference (const Shape& baseClassRef){
      baseClassRef.print();
      cout << endl <<"Area= " << baseClassRef.area() << endl
            <<"Volumen= " << baseClassRef.volume() << endl;
}

// funcion principal
int main(){
  triangulo t(5.2,6.5,7.1);
  virtualViaPointer (& t);
  virtualViaReference (t);
  
  cuadrado c(8.7);
  virtualViaPointer (&c);
  virtualViaReference (c);

  cubo cub(8.3);
  virtualViaPointer (&cub);
  virtualViaReference (cub);
  
  paralelepipedo p(4.5,6.7,9.2);
  virtualViaPointer (&p);
  virtualViaReference (p);
  
  return 0;
} 
