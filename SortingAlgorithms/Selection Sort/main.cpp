/*

Repeatedly finds the minimum element in an array and places it at the first position 
*/

#include <iostream>
#include <vector> //Remember to include vector before using vectors 
using namespace std;

int main()
{ 
    vector<int> sort_this = {5, 1, 4 ,2 ,8}; 
    int min; 

    for(int k = 0; k < sort_this.size()-1; k ++)
    {       
        for(int i = k+1; i < sort_this.size(); i ++)
        {
        
            if(sort_this.at(i) < sort_this.at(k))
            {
                int temp = sort_this.at(k); 
                sort_this.at(k) = sort_this.at(i);
                sort_this.at(i) = temp; 
            }
        }
    }

    for(auto i : sort_this)
    {
        cout << i << endl;
    }



    return 0;
}