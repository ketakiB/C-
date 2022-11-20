#include <iostream>
#include <vector>

using namespace std;

void printVec(int a)
{
    cout << "Value: " << a << endl; 
}

void addOne(int a )
{
    cout << " Value : " << a+1 << endl;
}
void forEach(vector <int> a, void(*fun)(int))
{
    for(int i: a)
    {
        fun(i);
    }
}

int main()
{
    //Create a vector 
    vector <int> a = {1,2,3,4}; 

    forEach(a, printVec); 
    std::cout << endl;

    forEach(a, addOne);



    return 0; 
}