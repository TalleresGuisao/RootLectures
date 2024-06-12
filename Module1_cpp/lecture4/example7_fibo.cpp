#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void seriefibo1(int max){

  //Termino general A_{n+1} = A_{n-2}+ A_{n-1}
  int vali = 0;
  int valf = 1;

  for(int m=0; m<max+2; m++)
    {
      if (m==0 || m==1){cout<<m<<", ";}
      else{
	valf=vali+valf;
	vali = valf-vali;
	cout<< valf << ", " ;
	//if(valf%2==0){cout<<" val es par: " << valf <<endl;}
	//else{cout<< " val no es par: "<< valf << endl;}
      }
      
    }
  cout << endl;
}

void seriefibo2(int max){

  // **********************************************************************************************************
  // No hay que olvidar que una reasignación de memoria es costosa en términos del tiempo de cálculo.
  // Así, cuando el tamaño de un vector es conocido de antemano, hay que crearlo directamente con dicho tamaño. 
  // **********************************************************************************************************

  vector< int > F( 50 );
  //vector< int > F( max );

  F[ 0 ] = 0;
  F[ 1 ] = 1;

  for(int m=0; m<max+2; m++)
    {
      if (m==0 || m==1){cout<<m<<", ";}
      else{
	F[m] = F[m-1] + F[m-2];
	cout<< F[m] << ", " ;
      }   
    }
  cout << endl;
}

void seriefibo3(int max){

  // **************************************************************************************
  // el operador [] únicamente puede acceder a una casilla si ha sido asignada previamente.
  // De lo contrario se producirá un error de segmentación.
  // **************************************************************************************
  
  vector< int > F;
  F.push_back(0);
  F.push_back(1);
  //F[ 0 ] = 0;// ERROR
  //F[ 1 ] = 1;
  //F.at(0) = 0;// ERROR
  //F.at(1) = 1;
  
  for(int m=0; m<max+2; m++)
    {
      if (m==0 || m==1){cout<<m<<", ";}
      else{
	//F.push_back( F[m-1] + F[m-2] );
	F.push_back( F.at(m-1) + F.at(m-2) );
	cout<< F[m] << ", " ;
      }   
    }
  cout << endl;
}

int main() 
{
 
  int number;
  
  cout <<"entre el n que desea de la sucesion fibonachi. Donde  A_{n+1} = A_{n-2}+ A_{n-1} \n";
  cin >> number;
  cout << "la sucesion de Fibonacci metodo 1: "  << endl;
  seriefibo1(number);
  //cout << seriefibo1(number) <<  endl;  
  //0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 144

  cout << endl;
  cout<< "con los vectores en fibo2" << endl;
  seriefibo2(number);

  cout << endl;
  cout<< "con los vectores en fibo3" << endl;
  seriefibo3(number); 

  return 0;
}
 
