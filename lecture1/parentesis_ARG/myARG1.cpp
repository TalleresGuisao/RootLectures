#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int i;
  cout<<"\nEl numero de elementos en la linea de comandos es" <<argc << endl << endl;
  for(i=0;i<argc;i++)
    {
      cout<<"La direccion almacenada en argv["<<i<<"]es " << &argv[i] << endl;
      // despliega la dirección como un número entero
      cout<<"El carácter al que apunta es "<< *argv[i]<<endl;
    }
  

  /*
  cout<<"\nLos siguientes argumentos fueron transmitidos a main(): ";
  for(int i=0;i<argc;i++)
    {
      cout<< argv[i] << " ";
    }
  cout << endl;
  */

  return 0;
}
