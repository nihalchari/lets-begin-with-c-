#include<iostream>
#include <vector>
#include <string>

using namespace std;

// an expression that could not be the left hand side of an assignment, 
// but that could only be the right hand side

//As a general rule, if you can apply the built-in address operator '&',
//then it's an lvalue expression, and otherwise it's an rvalue expression

// Move semantics is a way to avoid expensive deep copy operations and replace them with cheaper move operations. 
// Essentially, you can think of it as turning a deep copy into a shallow copy.

void fun(int &x)
{
    std::cout << "l_fun" << endl;
}

void fun(int &&x)
{
    std::cout << "r_fun" << endl;
}

int main()
{   
    //  int &lRef = 20;       //l value reference is not allowed for rvalue
    const int &lRef = 20;   // const lvalue reference is allowed for rvalue
    int &&rRef = 20;        // rvalue reference introduced in c++11
     
    int y;
    // fun(y);
    // fun(2); 

    ///@brief std::move(t)
    ///std::move is used to indicate that an object t may be "moved from",
    /// i.e. allowing the efficient transfer of resources from t to another object.  

    std::string str = "Hello";
    auto copyStr = str;
    // std::cout << "After copy, str is \"" << str << "\"\n";

    cout << &str << endl;
    auto moveStr = std::move(str);
    cout << &moveStr << endl;
    // std::cout << "After move, str is"  << str;



    #if 0
    int x;
    // x+0 = 56;
    // 20 = x;
    int *ptr;
    ptr = &x;
    // &x = 3;
    #endif

    /// rlavlue reference c++11
    #if 0
    int &&j = 20;
    ++j;
    cout << "j= " << j << endl;
    x = j;
    cout << "x= " << x << endl;
    #endif

    return 0;
}