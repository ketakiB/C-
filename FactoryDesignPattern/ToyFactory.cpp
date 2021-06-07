#include "ToyImp.cpp"

class ToyFactory
{
public: 
    static Toy* createToy(int a)
    {
        Toy* toy = NULL; 
        switch(a)
        {
            case 1: 
                toy = new Car; 
                break;
            case 2: 
                toy = new Bike;
                break;
            case 3: 
                toy = new Plane; 
                break;
            default: 
                std:: cout << " Unindentified object type" << std::endl;
                toy = NULL; 
                break; 
            return toy; 
        }
        toy -> showProduct();
    }
};