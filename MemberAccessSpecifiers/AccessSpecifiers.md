Public: Visible to everyone 
Protected : Visible only to current class and classes derived from it. (Ex: Main cant access it)
Private : Visible only to current class.

---------------------------------------------------------------------------------------
Base Class Member type    |   Derived class Inh. Mode   
                          |   Public          | Private        |  Protected  
    Private               | Not Inherited     | Not Inherited  | Not Inherited 
    Protected             | Protected         | Private        | Protected
    Public                | public            | private        | Protected
---------------------------------------------------------------------------------------

By Default, everything inside a class is private. In a struct, default is protected 
