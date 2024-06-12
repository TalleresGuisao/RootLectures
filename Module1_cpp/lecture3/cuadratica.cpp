#include <iostream>
#include <cmath>
using namespace std;

//este programa calcula las raices de una ecuacion cuadratica
int main()
{
  double a, b, c, disc, root1, root2;
  
  cout << "Este programa calcula las raices de una\n";
  cout << "   ecuacion cuadratica de la forma\n";
  cout << "            2\n";
  cout << "          ax + bx + c = 0\n\n";
  
  cout << "Por favor introduzca valores para a, b y c: ";
  cin >>  a >>  b >> c;
  if ( a == 0.0 && b == 0.0)
    cout << "La ecuacion es degenerada y no tiene raices.\n";
  else if (a == 0.0)
    cout << "La ecuacion tiene la raiz unica x = "
	 << -c/b << endl;
  
  else
    {
      disc = pow(b,2.0) - 4 * a * c;    // calcula el discriminante
      if (disc > 0.0)
	{
	  disc = sqrt(disc);
	  root1 = (-b + disc) / (2 * a);
	  root2 = (-b - disc) / (2 * a);
	  cout << "Las dos raices reales son "
	       << root1 << " y " << root2 << endl;
	}
      else if (disc < 0.0)
	cout << "Ambas raices son imaginarias.\n";
      else
	cout << "Ambas raices son iguales a " << -b / (2 * a) << endl;
    }
  
  return 0;
  
}


//Por favor introduzca valores para a, b y c: 5 6 1
//Las dos raices reales son -0.2 y -1
						 
