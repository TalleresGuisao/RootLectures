#include <iostream>
using namespace std;
 
class Distance {
 public:
  Distance() {
    feet = 0;
    inches = 0;
  }
  
  Distance(int f, int i) {
    feet = f;
    inches = i;
  }

  // overloaded equal (=) operator
  void operator = (const Distance &D ) { 
    feet = D.feet;
    inches = D.inches;
  }

  // overloaded minus (-) operator
  Distance operator - () {
    feet = -feet;
    inches = -inches;
    return Distance(feet, inches);
  }

  // overloaded < operator
  bool operator <(const Distance& d) {
    if(feet < d.feet) {
      return true;
    }
    if(feet == d.feet && inches < d.inches) {
      return true;
    }
    
    return false;
  }
  
  // method to display distance
  void displayDistance() {
    cout << "F: " << feet <<  " I:" <<  inches << endl;
  }
  
private:
  int feet;             
  int inches;           
};

int main() {
   Distance D1(11, 10), D2(5, 11);

   cout << "First Distance : "; 
   D1.displayDistance();
   cout << "Second Distance :"; 
   D2.displayDistance();

   // use assignment operator
   /*
   D1 = D2;
   cout << "First Distance :"; 
   D1.displayDistance();
   */
   
   // use minus operator
   /*
   -D1;                     // apply negation
   D1.displayDistance();    // display D1
   
   -D2;                     // apply negation
   D2.displayDistance();    // display D2
   */
   
   // use < operator
   if( D1 < D2 ) {
      cout << "D1 is less than D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }

   return 0;
}
