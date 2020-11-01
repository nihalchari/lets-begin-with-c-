
when object of class is created, constructor will be invoked automatically
initialization of data members is done inside ctor
if user has not provided ctor, then compiler generated default ctor will be called
if user provide ctor, compiler will not generate any ctor;


categories of constructors

   compiler generated ctors                    user definded constructors
        default ctor                                 parameterless ctor
                                                     parameterized ctor
        default copy ctor                            copy ctor
        default move ctor                            move ctor 

@note default ctor provided by compiler will be parameterless only