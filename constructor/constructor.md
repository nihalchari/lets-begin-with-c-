

special member function
no return type
same name as that of class
called implictly by compiler 
called once per object

ctor is used to initialize data members
if user has not provided ctor, then compiler generated default ctor will be called
if user provides ctor, compiler will not generate any ctor;
ctor is not invoked while creating pointer or reference of class object

categories of constructors

   compiler generated ctors                    user definded constructors
        default ctor                                 parameterless ctor
                                                     parameterized ctor
        default copy ctor                            copy ctor
        default move ctor                            move ctor 
        

Prefer {} List initialization over alternatives unless you have a strong reason not to.
For default initialization  always use curly braces {}.

List initialization does not allow narrowing
    An integer cannot be converted to another integer that cannot hold its value. For example, char to int is allowed, but not int to char.
    A floating-point value cannot be converted to another floating-point type that cannot hold its value. For example, float to double is allowed, but not double to float.
    A floating-point value cannot be converted to an integer type.
    An integer value cannot be converted to a floating-point type.
