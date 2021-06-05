# crispy-garbanzo

Design Patterns in C++

What is it? A solution to a commonly occuring problem

Types:

Creational ( 6 types)
Behavioral (12)
Structural (8)
Why? Tried and tested way of implementing a solution Pros and Cons known Language independent Highly Flexible

Factory Design Pattern:

Creates object for you, rather than initiating directly
FDP also called Virtual Constructor. C++ Does not have Virtual constructor. To call a virtual function, you need an object. So, if you want a virtual contructor, you need an object, but to create an object, you need a contructor. So, there is a problem
Implementation:
Define an interface or an abstract class for object creation
Let subclass decide what class to instantiate
Hence, the object is created at run time.
Advantages:
Less code changes if your object changes
Client does not have to create the object.
We get benefits of virtual constructor since the object is created at run time.
