#include <iostream>
using namespace std;

class HolaClase
{
public:
   void displayMessage()
   {
  	cout << "Bienvendo al mundo de los objetos!" << endl;
   }
};   

int main()
{
   HolaClase myHolaClase;
   myHolaClase.displayMessage();     

   return 0;
}
