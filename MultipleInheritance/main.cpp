// A derived class with numtiple base classes 
/* 
               B
           /   |  \  
         /     |   \
        D1     D2    D3 
*/ 

// There is an ambiguity problem with this type 

#include <iostream>

using namespace std;

class Cringe 
{
public: 
    Cringe() {cout << " In Cringe" << endl; }
}; 

class MaxCringe
{
public:
    MaxCringe() {cout << " In MaxCringe" << endl; }
};

class MC : public Cringe, public MaxCringe
{
public:
    MC() {cout << " In MC" << endl; }
};


int main()
{
    MC mc;
    return 0;
}

/*
Output: 
 In Cringe
 In MaxCringe
 In MC

The reason for this is that when we create an object of MC, the compiler implicitly calls the default constructor. 
So it implicitly does something like this: 
  MC(): Cringe(), MaxCringe() {cout << " In MC" << endl; }

This is possible because we have default constructors. If the constructors were parametrized, you would have had to pass
in the parameters in the contructor for MC. 

The constructors are called in the order in which they are inherited 

If you need a paremeterized constructor then you should pass it in as a parameterized list.




*/