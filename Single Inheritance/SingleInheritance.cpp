#include <iostream> 


// Single when only one derived class is inherited from a base class. A -----> B 


class Vehicle
{
    public: 
        void printProperties()
        {
            std::cout << " I have tires " << std::endl;
        }
};

class Car : public Vehicle
{
    public: 
        void printColor()
        {
            std::cout<< "I am red in color" << std::endl;
        }
};
