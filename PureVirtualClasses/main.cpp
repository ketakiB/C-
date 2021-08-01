#include <iostream>


//Is override primararily only for safety?
// Learn : Virtual function tables
// This is run time polymorphism right? 
class Base
{
public:
    virtual void pureVirtual() = 0;  // Figure out what this does internally in the compiler    
    virtual void alsoPureVirtual() = 0;
};

class InheritsBase : public Base
{
public: 
    void pureVirtual()  override
    {
        std::cout << " In InheritsBase " << std::endl;
        int x = 9; 
        std::cout << " x = " << x << std::endl;
    }
    void alsoPureVirtual() override
    {

    }

}; 

class AlsoInheritsBase : public Base 
{
    public: 
        void pureVirtual() override
        {
            std::cout << " In AlsoInheritsBase " << std::endl;
            int x = 7; 
            std::cout << " x = " << x << std::endl;
        }

        void alsoPureVirtual() override
        {
            
        }
};

int main()
{  
/*
If no implementation of alsoPureVirtual is given, this generates the error: 
    object of abstract class type "InheritsBase" is not allowed: -- pure virtual function "Base::alsoPureVirtual" has no overrider
*/
    InheritsBase I; 
    AlsoInheritsBase A; 
    I.pureVirtual(); 
    A.pureVirtual();
    return 0; 
}
