/*

Method  : Swap adjacent elements till they are in the correct order 

The algorithm does not know that sorting is complete till it has one full pass without any swapping 
At the end of every iteration , the biggest element is placed at the end. It bubbles up 

*/ 

#include <iostream>
#include <vector> //Remember to include vector before using vectors 
using namespace std;

int main()
{
    vector<int> sort_this = { 5, 1, 4 ,2 ,8};
    int swap_bool = false; 
    int k = sort_this.size()-1;  
    do
    {
        swap_bool = false; 
        for(int i = 0; i < sort_this.size() -1 ; i++)
        {
            
            if(sort_this.at(i) > sort_this.at(i+1))
            {
                swap_bool = true; 
                int temp = sort_this.at(i); 
                sort_this.at(i) = sort_this.at(i+1);
                sort_this.at(i+1) = temp; 
            }
        }
        if(swap_bool == 0) //Break if there has not been a single swap in the iteration
        {
            break;
        }
        k--;
    } while(k!=0);    // Arary guaranteed to be sorted after n-1 times 

    for(auto i : sort_this)
    {
        cout << i  << endl;
    }
    
    

    return 0; 
}