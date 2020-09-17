#include<iostream>

///@brief actual function call doesnt happen, compiler will put code at call site(no overhead of passing value and calling fn)
/// no transfer of control,


inline int SQUARE(int);


#include "inline.inl"