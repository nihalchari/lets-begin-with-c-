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
    
    TestClass testObj{};    //initialized to 0
    cout << testObj.m_iNum << endl;
    cout << testObj.m_fNum << endl;

    TestClass testObj1;     //uninitialized
    cout << testObj1.m_iNum << endl;
    cout << testObj1.m_fNum << endl;

    TestClass testObj2{5};
    ///@note @todo instantiating using () brackets in case of compiler generated ctor is not allowed.. y?
    // TestClass testObj5(55);
    cout << testObj2.m_iNum << endl;
    cout << testObj2.m_fNum << endl;


    // TestClass testObj4{6.5f};
    // cout << testObj4.m_iNum << endl;
    // cout << testObj4.m_fNum << endl;


    TestClass testObj3{7, 9.5f};
    cout << testObj3.m_iNum << endl;
    cout << testObj3.m_fNum << endl;

    return 0;
}
