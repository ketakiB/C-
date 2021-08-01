/* 
      Map: 
        Red Black Tree 
        'Key : Value' pairs in sorted order
        If you store something here, it is sorted by the key 
        Keys have to be unique. Values can be the same

        Syntax: 
            map<T1,T2> obj // T1 is the key type and T2 is the value type
            std::map is an associative container that stores elements in key value pairs.
            Repeated keys overrride the past entry 
            Keys/Values can be anything 
            Implemented using a Self balance tree (AVL/Red Black tree)

                              5 
                        3            7
                      2   4       6    8
NOTE THE COUT: 
    We entered Pranav before Ketaki, but the map stored it in ascending order. 
    So we printed Ketaki before Pranav     
*/ 

#include <iostream>
#include <map> 

int main()
{
    std::map<std::string, int> M1; 
// One way to store 
    M1["Pranav"] = 9; 
    M1["Ketaki"] = 10; 
// Another way is 
    M1.insert(std::make_pair("Sanika" , 6)); 



// One way to iterate 
    for(auto &i : M1)
    {
        std::cout << " M1. Key = " << i.first << std:: endl; 
        std::cout << " M1 Value = " << i.second << std::endl;
    }

//Another way to iterate is
    std::cout << M1["Sanika"] << std::endl;

}