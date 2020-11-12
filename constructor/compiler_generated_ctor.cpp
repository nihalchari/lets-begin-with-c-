#include<iostream>
using namespace std;


///@brief if user has not provided ctor, then compiler generated default ctor will be called
///if user provide ctor, compiler will not generate any ctor;



class TestClass
{
    public:
    int m_iNum;
    float m_fNum;

};

int main()
{
    ///@note @todo instantiating using () brackets in case of compiler generated ctor is not allowed.. y?
    // TestClass testObj();
    
    TestClass testObj;                  //undefined behaviour, sometimes garbage value 
    cout << testObj.m_iNum << endl;
    cout << testObj.m_fNum << endl;

    // TestClass testObj1{};            //initialized to 0
    // cout << testObj1.m_iNum << endl;
    // cout << testObj1.m_fNum << endl;

    ///@note Do not relie on compiler generated ctor for creating object while passing arguments
    // TestClass testObj2{5};
    // cout << testObj2.m_iNum << endl;
    // cout << testObj2.m_fNum << endl;


    ///@note Do not relie on compiler generated ctor for creating object while passing arguments
    // TestClass testObj4{6.5f};
    // cout << testObj4.m_iNum << endl;
    // cout << testObj4.m_fNum << endl;


    ///@note Do not relie on compiler generated ctor for creating object while passing arguments
    // TestClass testObj3{7, 9.5f};
    // cout << testObj3.m_iNum << endl;
    // cout << testObj3.m_fNum << endl;

    return 0;
}
