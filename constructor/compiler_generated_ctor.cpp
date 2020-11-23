#include<iostream>
#include<vector>
using namespace std;

///@brief if user has not provided ctor, then compiler generated default ctor will be called
///if user provide ctor, compiler will not generate any ctor;

///@note Do not relie on compiler generated ctor for creating object while passing arguments

class TestClass
{
    public: 
    int m_iNum; 
    float m_fNum;
};

int main()
{
    TestClass testObj;                  //undefined behaviour, sometimes garbage value 
    cout << testObj.m_iNum << endl;
    cout << testObj.m_fNum << endl;

    TestClass testObj1{};            //initialized to 0
    cout << testObj1.m_iNum << endl;
    cout << testObj1.m_fNum << endl;
    
    TestClass testObj2{2};
    cout << "m_iNum " << testObj2.m_iNum << endl;
    cout << "m_fNum " << testObj2.m_fNum << endl;

    TestClass testObj3{3.3f};
    cout << "m_iNum " << testObj3.m_iNum << endl;
    cout << "m_fNum " << testObj3.m_fNum << endl;
    
    TestClass testObj4{40, 4.4f};       
    cout << "m_iNum " << testObj4.m_iNum << endl;
    cout << "m_fNum " << testObj4.m_fNum << endl;


    vector<int> vec{100,100,100,100,100};
    vector<int> vec1(4,100);
    
    for(const auto &element : vec1)
    {
        cout << element << endl;
    }
 
    return 0;
}
