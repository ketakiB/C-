#include <iostream>
using namespace std;
 
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      int print(double  f1, float f2) {
        cout << "Printing float: " << f1+f2 << endl;
        return 1; 
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;
 
   // Call print to print integer
   pd.print(5);
   
   // Call print to print float
   pd.print(500.263, 1.0);
   
   // Call print to print character
   pd.print("Hello C++");
 
   return 0;
}