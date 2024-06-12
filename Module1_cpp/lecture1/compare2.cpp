#include <iostream>

using namespace std;

int main()
{
  int first = 10;
  int second = 20;
  string result;
  
  result = (first == second) ? "equal" : "not equal";
  // Esta linea es probablemente una de las lineas de codigo C++ de aspecto mas extraño que veras en este curso. 
  
  cout << result << endl;  // NOTE: no usamos std::cout o st::endl. 
  
  return 0;
}
