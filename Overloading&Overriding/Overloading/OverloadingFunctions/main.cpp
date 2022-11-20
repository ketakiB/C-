#include <iostream>
using namespace std;
 
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }

      // Illegal 
      /* 
          void print(int i) 
          {
            cout << "Printing int: " << i << endl;
            return 1; 
          }
      */ 

      // Legal 
      int print(int i, int j) 
      {
        cout << "Printing int: " << i << endl;
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