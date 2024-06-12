// Using range-based for 
#include <iostream>
#include <array>
using namespace std;

int main() {
   array<int, 5> items{1, 2, 3, 4, 5};

   // mostrar elementos antes de la modificacion 
   cout << "items before modification: ";
   for (int item : items) {
      cout << item << " ";
   }

   /*
   cout << " " << endl;
   for (int counter{0}; counter < items.size(); ++counter) {
     cout << items[counter] << " ";
     }
   */

   //
   for (int& itemRef : items) {
      itemRef *= 2;
   }

   // mostrar elementos despues de la modificacion
   cout << "\nitems after modification: ";
   for (int item : items) {
      cout << item << " ";
   }

   cout << endl;
}
