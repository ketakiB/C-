// A ---> B ----> C ----> D .....
// You inherit from a base class only when you have a IS A reltionship

//Example:

class Animal 
{

};

// Cat IS A animal
class Cat : public Animal
{

};

// Russian Cat is a Cat 
class RussianCat : public Cat
{

}; 