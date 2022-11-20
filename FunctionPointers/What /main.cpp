/*
Used to assign functions to variables 
Tells the compiler t get the instructions to be executed for a cerain function and assign it. 
Function pointers hold addresses to functions in memory 

Can use this create 
*/

#include <iostream>

using namespace std;
void printHello()
{
    cout << "Hello " << endl;
}

void printInt(int a)
{
    cout << a << endl;
}

double printdouble()
{
    cout << "0.0" << endl;
    return 0.0;
}


int main()
{
    void (*fun)(); 
    fun = printHello;

    typedef void(*TypeOfFun)(int); 
    TypeOfFun t = printInt; 

    double(*fun2)() = printdouble;

    // Calling : 
    
    fun(); 

    int a = 6; 
    t(a);

    fun2();
}