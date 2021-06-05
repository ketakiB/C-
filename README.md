# crispy-garbanzo

Design Patterns in C++

What is it? A solution to a commonly occuring problem

Types:

Creational ( 6 types)
Behavioral (12)
Structural (8)
Why? Tried and tested way of implementing a solution Pros and Cons known Language independent Highly Flexible

Factory Design Pattern:

1. Creates object for you, rather than initiating directly
2. FDP also called Virtual Constructor. C++ Does not have Virtual constructor. To call a virtual function, you need an object. So, if you want a virtual contructor, you need an object, but to create an object, you need a contructor. So, there is a problem


Implementation:
1. Define an interface or an abstract class for object creation
2. Let subclass decide what class to instantiate
3. Hence, the object is created at run time.


Advantages:
1. Less code changes if your object changes
2. Client does not have to create the object.
3. We get benefits of virtual constructor since the object is created at run time.
