#include<iostream>
using namespace std;


///@brief constructor(ctor) is a special member function with same name as of class and not return type


class TestClass
{
    public:
    ///@note initialized using ctor initializer list
    TestClass():m_iNum(100),m_fNum(10.10f)
    {   
    cout << "TestClass ctor parameterless"<<endl;
    };

    // TestClass(int val):m_iNum(val), m_fNum(10.10f)
    // {   
    //     cout << "TestClass ctor with param int"<<endl;
    // };

    // TestClass(float val):m_fNum(val), m_iNum(100)
    // {   
    //     cout << "TestClass ctor with param float"<<endl;
    // };
    
    // ///@note initialized using ctor initializer list
    // TestClass(float fval, int ival):m_iNum(ival),m_fNum(fval)
    // {  
    //     cout << "TestClass ctor with param float and int"<<endl;
    // };


    int m_iNum;
    float m_fNum;
};



int main()
{    

    // TestClass obj1;
    // cout << obj1.m_iNum << endl;
    // cout << obj1.m_fNum << endl;


    //  TestClass obj2{5.5f};
    // cout << obj2.m_iNum << endl;
    // cout << obj2.m_fNum << endl;

    // TestClass obj3{6};
    // cout << obj3.m_fNum << endl;
    // cout << obj3.m_iNum << endl;
    

    // TestClass obj4{222.2f, 888};
    // cout << obj4.m_fNum << endl;
    // cout << obj4.m_iNum << endl;

    
    // auto obj = TestClass();
    // cout << obj.m_iNum << endl;
    // cout << obj.m_fNum << endl;

    return 0;
}