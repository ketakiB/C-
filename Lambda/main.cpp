#include <iostream> 
#include <vector>

using namespace std;

void forEach(vector <int> a, void (*func)(int))
{
    for(int i : a)
    {
        func(i);
    }
}

int main() 
{   
    vector<int> a = {1,2,3,4}; 
    forEach(a, [](int value){cout<< "Value : " << value << endl;});


    return 0; 

}