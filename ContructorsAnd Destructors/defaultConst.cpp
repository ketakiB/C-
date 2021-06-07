#include <iostream>


class Box
{
    public: 
        int length, width, height;
};


int main()
{
    Box b; 
    std::cout << " Length = " << b.length << std::endl; 

    return 0; 
}


/* Output : 
    Length = garbage value 
    Reason : Since the default constructor is used, AND member is uninitialized in the class def, the default constructor assigns
    it a random garbage value

    **** Remember to initialize members if using default constrctors
*/