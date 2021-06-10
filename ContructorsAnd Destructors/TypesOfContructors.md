Why use Constructors? 
To customize how class members are initialized, or to invoke functions when an object of your class is created, define a constructor. A constructor has the same name as the class and no return value. You can define as many overloaded constructors as needed to customize initialization in various ways. Typically, constructors have public accessibility so that code outside the class definition or inheritance hierarchy can create objects of the class. But you can also declare a constructor as protected or private

Constructors can optionally take a member init list. This is a more efficient way to initialize class members than assigning values in the constructor body. The following example shows a class Box with three overloaded constructors. The last two use member init lists:

When you declare an instance of a class, the compiler chooses which constructor to invoke based on the rules of overload resolution:

Constructors may be declared as inline, explicit, friend or constexpr.
A constructor can initialize an object that has been declared as const, volatile or const volatile. The object becomes const after the constructor completes.
To define a constructor in an implementation file, give it a qualified name as with any other member function: Box::Box(){...}.


Using a member initializer list is preferred over assigning values in the body of the constructor because it directly initializes the member
  Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}


You can prevent the compiler from generating an implicit default constructor by defining it as deleted:
    // Default constructor
    Box() = delete;


Types: 


A. Default Contructor: 
    1. Does not take in any arguments
    2. If a default constructor is not defined explicitly, the compiler does so implicitly
    3. It is a good idea to define the default contructor because: 
        1. If you don't define the default constructor, and someone later adds a constructor with parameters and forgets to also add the parameterless constructor, the default constructor will go away and that could break existing code. Explicitly defining it ensures that even if someone adds an overloaded constructor later, the parameterless one is still there.
        2. If the constructor is declared in the header and defined out-of-line (in a .cc/.cpp file), then the implementation can later be modified with dependent code only needing to be re-linked. Declaring a constructor after the fact necessarily affects the header, requiring recompilation of dependent code
    4. If you rely on an implicit default constructor, be sure to initialize members in the class definition, as shown in the previous example. Without those initializers, the members would be uninitialized and the Volume() call would produce a garbage value. In general, it is good practice to initialize members in this way even when not relying on an implicit default constructor.


B. Copy Constructor: 
    1. A copy constructor initializes an object by copying the member values from an object of the same type. If your class members are all simple types such as scalar values, the compiler-generated copy constructor is sufficient and you do not need to define your own. If your class requires more complex initialization, then you need to implement a custom copy constructor. For example, if a class member is a pointer then you need to define a copy constructor to allocate new memory and copy the values from the other's pointed-to object. The compiler-generated copy constructor simply copies the pointer, so that the new pointer still points to the other's memory location.

    2. Can have any of the following forms: 
    Box(Box& other); // Avoid if possible--allows modification of other.
    Box(const Box& other);
    Box(volatile Box& other);
    Box(volatile const Box& other);

    // Additional parameters OK if they have default values
    Box(Box& other, int i = 42, string label = "Box");

    3. When you define a copy constructor, you should also define a copy assignment operator (=). For more information, see Assignment and Copy constructors and copy assignment operators.

    You can prevent your object from being copied by defining the copy constructor as deleted:

    Box (const Box& other) = delete;

    