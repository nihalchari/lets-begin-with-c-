int SQUARE(int  num)
{
    return num*num;
}




///@note inline function can be used as a replacemnet for macro, both are expanded at place of call and is efficient in execution
/// both bloats the code
///     Macro                                           Inline
///     pitfalls(syntactic and sematics)                No pitfalls as it is pure function
///     pre-processor                                   assembly stage
///     No type check                                   Type check hence Robust
///     Not visible to debugger                         Visible to Debugger in Debug mode only

///@note complier side
/// inlining is not done in debug mode
/// Not necessary every function defined as inline will be treated as inline by compiler(eg. large function body)
/// Compiler may convert non-inline function(not explicitly mentioned using inline keyword), to inline for optimization


/// Inline function cannot be recursive
/// function body need to be in header, so may be .inl is correct place