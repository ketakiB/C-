#include <iostream>
#include "CopyConstructor.cpp" 

class Box
{
    public: 
        int length, width, height;
};

// This is how you declare a init list: Note: Members are initialized in the order in which they are declared.
class MemberInitList
{
    public: 
    MemberInitList(int a, int b, int c): len(a), wid(b), ht(c) {}; 

    protected: 
    int len, wid,ht; 
};


int main()
{
    Box b; 
    std::cout << " Length = " << b.length << std::endl; 

/* Output : 
    Length = garbage value 
    Reason : Since the default constructor is used, AND member is uninitialized in the class def, the default constructor assigns
    it a random garbage value

    **** Remember to initialize members if using default constrctors
*/

    copyConstructDefault c1; 
    copyConstructDefault c2 = c1; 
    c2.printa();
    
    return 0; 
}


