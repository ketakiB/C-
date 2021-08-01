1. Data Types in C++ : 
    4 types of data: 
        1. Primitive (int, float, char, double, bool, void)
        2. Derived (array, pointer, functions, reference)
        2.1. Enumerations (Ex. Enums)
        3. Abstract or User defined (Class, Struct, Union, Typedefs etc)
    Primitive: 
        char	        at least 1 byte	    -128 to 127
        unsigned char	at least 1 byte	    0 to 255
        short	        at least 2 bytes	-32768 to 32767
        unsigned short	at least 2 bytes	0 to 65535
        int	            at least 2 bytes	-32768 to 32767
        unsigned int	at least 2 bytes	0 to 65535
        long	        at least 4 bytes	-2,147,483,648 to 2,147,483,647
        unsigned long	at least 4 bytes	0 to 4,294,967,295
        float	        at least 2 bytes	3.4e-038 to 3.4e+038
        double	        at least 8 bytes	1.7e-308 to 1.7e+308
        long double	    at least 10 bytes	1.7e-4932 to 1.7e+4932

        The actual size depends on the compiler used. 
        Unsigned = When we know we cannot have negative values

        Short: Variant of int with smaller range (-2^15 to 2^15-1)

        Int: On a 16 bit compiler, 2 bytes reserved, range from + to - 2^15
             On a 32 bit compiler, 4 ...                            ...2^32
        
        Long : Atleats 4 bytes

        float: 4 bytes. Range 3.4e -38 to 3.4e38

        double: 8 bytes

        char: 1 byte. Can be sigbned on unsigned. 
              Well, when you store a character value using char data type, what gets stored is not the character but the binary equivalent of ASCII value of the character.

    Derived: 
        Enums   : Assigns name to integers, improved redability
        Arrays  : An array is a linear data structure that stores the elements in contiguous memory locations in a linear/sequential manner. The elements are indexed from zero. 
        Pointers: Hold addresses of data members
        Functions : User defined, perform some action, can be reused 


    Abstract: 
        Structs : Group of elements of different data types under a common data type
        Unions  : Similar to sctructs, but each data member gets assigned a memory equal to the highest data member


