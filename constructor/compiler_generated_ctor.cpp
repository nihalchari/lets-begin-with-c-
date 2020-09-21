#include<iostream>
using namespace std;


///@brief constructor(ctor) is a special member function with same name as of class and not return type


class TestClass
{
    public:
    int iNum;
    float fNum;

};

int main()
{
    ///@note @todo instantiating using () brackets in case of compiler generated ctor is not allowed.. y?
    // TestClass testObj();
    
    TestClass testObj{};    //initialized to 0
    cout << testObj.iNum << endl;
    cout << testObj.fNum << endl;

    TestClass testObj1;     //uninitialized
    cout << testObj1.iNum << endl;
    cout << testObj1.fNum << endl;

    TestClass testObj2{5};
    ///@note @todo instantiating using () brackets in case of compiler generated ctor is not allowed.. y?
    // TestClass testObj5(55);
    cout << testObj2.iNum << endl;
    cout << testObj2.fNum << endl;


    // TestClass testObj4{6.9f};
    // cout << testObj4.iNum << endl;
    // cout << testObj4.fNum << endl;


    TestClass testObj3{6, 9.5f};
    cout << testObj3.iNum << endl;
    cout << testObj3.fNum << endl;

    return 0;
}
