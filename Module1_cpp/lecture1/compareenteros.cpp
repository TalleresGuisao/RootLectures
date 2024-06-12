// compareenteros.cpp
// compara enteros usando operadores de comparacion >=, >,<, <= y !=
#include <iostream> 
#include <iomanip>

using std::cout; 
using std::cin; 
using std::endl; 

// function main 
int main()
{
  int number1{0}; // primer entero
  int number2{0}; // segundo entero

   cout << "entre dos numeros enteros: "; // 
   cin >> number1 >> number2; // lee los dos enteros del usuario

   if ( number1 == number2 )
     cout << number1 << " == " << number2 << endl;

   if ( number1 != number2 ){
     cout << number1 << " != " << number2 << endl;
   }
   
   if ( number1 < number2 ){
     cout << number1 << " < " << number2 << endl;
   }
   
   if ( number1 > number2 ){
     cout << number1 << " > " << number2 << endl;
   }
   
   if ( number1 <= number2 ){
     cout << number1 << " <= " << number2 << endl;
   }
   
   if ( number1 >= number2 ){
     cout << number1 << " >= " << number2 << endl;
   }
   
   return 0; 
} 
