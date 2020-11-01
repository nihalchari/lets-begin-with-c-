#include<iostream>
using namespace std;

class TestClass
{
    public:

    TestClass(void):x(6)
    {
        cout << "inside ctor\n";
    }

    int x;
};


int main()
{
    TestClass testObj;
    TestClass testObj1;
    TestClass testObj2;
    cout << testObj.x << endl;
    // testObj.initTestClass();
    cout << testObj.x << endl;
    // testObj.initTestClass();
    // testObj.initTestClass();
    return 0;
}




///@brief
///special member function
/// no return type
/// same name as that of class
/// called implictly by compiler once, while creating an object