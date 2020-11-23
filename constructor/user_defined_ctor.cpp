#include<iostream>
using namespace std;


///@brief constructor(ctor) is a special member function with same name as of class and not return type


class TestClass
{
    public:
    ///@note initialized using ctor initializer list
    TestClass():m_fNum(10.10f),m_iNum(1)
    {   
    cout << "TestClass ctor parameterless"<<endl;
    };

    TestClass(int val):m_iNum(val), m_fNum(20.22f)
    {   
        cout << "TestClass ctor with param int"<<endl;
    };

    TestClass(float val):m_fNum(val), m_iNum(35)
    {   
        cout << "TestClass ctor with param float"<<endl;
    };
    
    // ///@note initialized using ctor initializer list
    TestClass(float fval, int ival):m_iNum(ival),m_fNum(fval)
    {  
        cout << "TestClass ctor with param float and int"<<endl;
    };

    int m_iNum;
    float m_fNum;
};


int main()
{    

    TestClass obj1;
    cout << obj1.m_iNum << endl;
    cout << obj1.m_fNum << endl;

    TestClass obj2(20);
    cout << obj2.m_iNum << endl;
    cout << obj2.m_fNum << endl;

    TestClass obj3{33.30f};
    cout << obj3.m_iNum << endl;
    cout << obj3.m_fNum << endl;

    TestClass obj4{40.40f, 40};
    cout << obj4.m_fNum << endl;
    cout << obj4.m_iNum << endl;

    return 0;
}