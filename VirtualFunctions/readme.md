These are the key to OO dynamic polymorphism 
Used when you dont know what behaviour you want at compile time. 

For behaviour that we do know at compile time, use templates

Needed when you want to use a base class pointer with the type derived 


Example: 
If you have a SensorData base class and you have a function like "consumedata" 
Then if you have a class like Radar and a class like Lidar. Each sensor does its own thing for consume data. 
So you want the function to be virtual in parent and you want the children to have their own definitions. 

For pure virtual functions, the class becomes an abstract class. Used when we dont know the implementation in the base class. The derived classes have to overwrite these methods, else they become abstract classes too 

A class that has all methods as pure virtual is called an interface 

