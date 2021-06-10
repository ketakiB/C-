#include <iostream>


// No explicitly declared copy constructor
class copyConstructDefault
{
    public: 
    int a = 9; 
    void printa()
    {
        std::cout << " Inside Default copy constructor class. a =" << a << std::endl;
    }
}