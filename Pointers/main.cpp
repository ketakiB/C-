/* 
3 ways: 
    Call by value
    Call by ref
*/


// C++ program to illustrate call-by-methods in C++

#include <iostream>

using namespace std;


//Pass-by-Value = contents copied. Hence if you change the value of n in the function 
// it does not change in the method that called this function 
int square(int n) 
{
    return (n*n);
}

int main() 
{
    int n = 9; 
    auto sqr = square(9); 
    std::cout<< "n = %d sqr = %d " << n << sqr << std::endl;
    return 0; 
}
