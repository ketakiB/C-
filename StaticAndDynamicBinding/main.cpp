/* 
fun is a general function which takes in a pointer of type Base. Virtual makes sure that dynamic binding is 
possible. 

A derived pointer can be of type Base. 

Virtual keyword is enough to be used only in the base class

If you remove virtual, only the base class method will be called.

*/

/*

class Sensor
{
    virtual addDetections();
}; 

class Radar: public Sensor 
{
    addDetections();
}; 

class Lidar : public Sensor
{
    addDetections()
}; 

void calladdDetections(Sensor* s)
{
    addDetections(); 
}

int main()
{
    calladdDetections(new Radar) // Will call add detections from Radar. 
}

*/

#include <iostream>

class Base
{
    public: 
    virtual void myFun()
    {
        std::cout << " In Base " << std::endl;
    }
};

class Derived: public Base
{
    public: 
    void myFun()
    {
        std::cout << " In derived " << std::endl; 
    }
}; 

void fun (Base* b)
{
    b->myFun();
}


int main()
{
    Base *b = new Base; 
    Derived *d = new Derived;

    fun(b);
    return 0; 
}