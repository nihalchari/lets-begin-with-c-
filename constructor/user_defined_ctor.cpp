#include<iostream>
using namespace std;


///@brief constructor(ctor) is a special member function with same name as of class and not return type


class TestClass
{
    public:
    ///@note initialized using ctor initializer list
    TestClass():iNum(15),fNum(22.5f)
    {   
    cout << "TestClass ctor"<<endl;
    };

    TestClass(int val)
    {   iNum=val;
        cout << "TestClass ctor with param int"<<endl;
    };

    TestClass(float val)
    {   fNum=val;
        iNum=100;
        cout << "TestClass ctor with param float"<<endl;
    };
    
    ///@note initialized using ctor initializer list
    TestClass(float fval, int ival):iNum(ival),fNum(fval)
    {  
        cout << "TestClass ctor with param float and int"<<endl;
    };


    int iNum;
    float fNum;
};



int main()
{    
    TestClass obj4{222.2f, 888};
    TestClass obj1{};
    TestClass obj2{5};
    TestClass obj3{5.6f};
    cout << obj1.iNum << endl;
    cout << obj1.fNum << endl;
    cout << obj2.iNum << endl;
    cout << obj3.fNum << endl;
    cout << obj3.iNum << endl;
    cout << obj4.fNum << endl;
    cout << obj4.iNum << endl;
    return 0;
}