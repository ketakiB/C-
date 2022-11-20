//
//
// Copy right notice 
//

#include <iostream>
#include "ToyFactory.cpp" 

using namespace std;
int main()
{
    cout<< "Enter the type of Toy you want to create"<< endl;
    int type; 
    cin >> type; 

    Toy* toy = ToyFactory::createToy(type); 

    return 0; 

}