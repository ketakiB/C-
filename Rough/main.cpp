#include <iostream>
using namespace std;

//Pass by value does not change the original. 

// Pass by reference does 
void passByReferenceEx(int& a)
{
    a = 10; 
}

int main()
{
    int a = 5;
    int* canStoreA = &a; 

    cout << " a = " << a << endl;
    cout << " a is stored at location " << canStoreA << endl;

    cout << endl;

    cout << " Address of pointer that stores a is " << &canStoreA << endl;
    cout << " Derefernced value of pointer that stores a is " << *canStoreA << endl;


    // Test out pass by reference 
    passByReferenceEx(*canStoreA);

    cout << " New value of a is " << a << endl;

    return 0;
}
