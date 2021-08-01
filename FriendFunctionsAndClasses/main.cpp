// When a function is declared as a friend in a class, it can access the private/protected/public members of that class. 



#include <iostream>

class Base 
{
    int a; 
    public: 
    Base(int c): a(c) {};
    friend void setA(Base& b);
    void printA() {std::cout << a;}
};

void setA(Base& b)
{
    b.a = 8; 
}

int main()
{
    Base b(0);
    setA(b); 
    b.printA();

}