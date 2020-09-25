#include "cstdio"
#include<iostream>

///@brief
/// no namespace inside function/ class
/// main() should be global namespace always


///@note programm scope
int i = 10;

///@note namespace scope
namespace name1
{
    int i1 =2020;
    
    namespace name11
    {
        int i=2021;
    }
}

namespace name2
{
    int i2 =2022;

}


int main()
{

    ///@note when you use "using namespace", and try to acces correponding member directly without explicitly
    /// mentioning namespace at the point of access, make sure that no other identifier having same name is visible in scope where 
    /// you have included "using namespace" clause
    using namespace name2;
    
    ///@note this will access global value
    printf("::i = %d\n", ::i);  

    ///@note accessing value inside namespace
    printf("name1::name11::i = %d\n", name1::name11::i);

    ///@note since we have used "using namespace name2"
    printf("name2::i2 = %d\n", i2); 
    
    {
        ///block scope
        int i = 50;  

        ///@note this will access global value
        printf("::i = %d\n", ::i);
        // printf("i = %d\n", i);  
      
    }    
    return 0;
}