// Pure virtual class 
#include <string>
#include <iostream>
class Toy
{
public: 
    virtual void prepareParts() = 0;
    // More methods ... 
    virtual void showProduct() = 0; 

    std::string name; 
    float price;
};