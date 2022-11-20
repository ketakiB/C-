/*
Unique pointer is a class template 
in C++ 11
for avoiding mem leaks
wraps a raw pointer and deallocates the raw pointer after the unique pointer goes out of scope
-> & . can be used. 
Even when there is an exception, the pointer is deleted 
We can create an array of unique pointers

*/
#include <iostream>

using namespace std;
class Foo
{
    int x; 
    public:
        Foo(int a) : x(a){}; 
        int getX() {return x;}
        ~Foo()
        {
            cout << " In des" << endl;
        }

};

int main()
{
    // Foo* foo = new Foo(10); 
    // cout << foo ->getX() << endl;
    // delete(foo);

    unique_ptr<Foo> foo_unique(new Foo(10)); 
    foo_unique->
}