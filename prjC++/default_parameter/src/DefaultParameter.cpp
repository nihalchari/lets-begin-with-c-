#include<iostream>

using namespace std;

///@note All parameters to the right of parameter with default argument must have default arguments
/// Default argumemts can not be redefined
/// All non default parameters must be provided
/// can provide some or all default parameters, in case only some of the default parameters are provided then 
/// order need to be followed, i.e. from left to right

int add(int, int= 10, int=20, bool = true );

void fun(int, double = 0.0, char * = NULL, bool =true, float = 5.4f)
{
    return ;
}

int main()
{

    auto res = add(1);
    cout << "res    :   " << res << endl;
    
    char ch ='A';
     fun(1);

    return  0;
}


int add (int x, int y, int z, bool)
{
    return x+y+z;
}
