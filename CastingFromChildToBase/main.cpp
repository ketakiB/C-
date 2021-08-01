#include <iostream>

using namespace std;
class Base 
{
    public: 
    virtual void makeMeVirtual()
    {
        cout << " In Base class " << endl;
    };
};

class Child: public Base 
{
public: 
    void makeMeVirtual()  
    {
        cout << " In Child class " << endl;
    }
};

int main()
{   
    // This is allowed. You can upcast
    Base* b = new Child; 
    b->makeMeVirtual();

    /*
    You cannot downcast. Ex: Child* c = new Base is not allowed.
    */

    return 0; 
}

