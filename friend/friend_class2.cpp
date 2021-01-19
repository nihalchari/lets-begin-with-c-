#include<iostream>
using namespace std;

class Test;

class FriendClass { 
public: 
    void friendFun1(Test&);
    void friendFun2(Test);
}; 
  
class Test { 
private: 
    int num1; 
    int num2;
    void fun(void)
    {
        cout << "Test:fun()" << endl;
    }
  
public: 
    Test() : num1(0),num2(10){};
    // friend void FriendClass::friendFun1(Test& x); // Friend function 
    // friend void FriendClass::friendFun2(Test x); // Friend function 
    friend FriendClass;
    
}; 
  
void FriendClass::friendFun1(Test& x) 
{ 
    ///@brief Since friendFun() is friend of Test, it can access private members of Test 

    std::cout << "Test::num1 = " << x.num1 << std::endl; 
    x.fun();
    
} 

void FriendClass::friendFun2(Test x)
{
    std::cout << "Test::num2 = " << x.num2 << std::endl; 
    x.fun();
}
  
int main() 
{ 
    FriendClass friendObj; 
    Test x; 
    friendObj.friendFun1(x); 
    friendObj.friendFun2(x); 
    return 0; 
}
