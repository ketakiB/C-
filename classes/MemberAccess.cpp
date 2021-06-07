#include <iostream>

class Box
{
    private: 
        int a; 
    protected: 
        int b = 5; 
}; //You need this semicolon because the compiler looks for instances between } and ; 

using namespace std;


class InheritFromBoxProtectedly : protected Box
{
    public: 
        void printb()
        {
            cout << this -> b << endl; // Works 
        }

}; 



int main()
{
    InheritFromBoxProtectedly box; 
   // cout << box.a << endl; // Error : Member inaccessible 
   // cout << box.b << endl; // Error : Member inaccessible 

    /*
    We get a compiler error here because both of those are inaccessible outside the class. A class that inherits 
    from Box privately or protectedly can access b, but main does not do that. Hence the error. Only Public members can be acceessible by main 
    in this case
    */

   box.printb();



    return 0;
};