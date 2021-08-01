#include <iostream>
#include <thread>

void fun(int x)
{
    std::cout << x << std::endl;
}

int main()
{
    int y = 10; 
    std::thread t(fun,y); 
    t.join();
    return 0;
}