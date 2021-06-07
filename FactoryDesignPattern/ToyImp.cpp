#include "Toy.hpp"

class Car: public Toy
{
public:
    void prepareParts() override
    {

    }

    void showProduct()
    {
        std::cout << " I created a Car" << std::endl;
    }


}; 

class Bike: public Toy
{
public: 
    void prepareParts() override
    {

    }

    void showProduct()
    {
        std::cout << "I created a Bike" << std::endl;
    }
};

class Plane: public Toy
{
public: 
    void prepareParts() override
    {

    }

    void showProduct()
    {
        std::cout << " I created a Toy" << std::endl;
    }
};