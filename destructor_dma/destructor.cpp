#include<iostream>
using namespace std;


class TestClass
{
    public:
    TestClass()
    {
        std::cout << this <<"ctor " << endl;
        this->x=0;
        ptr = new int{5};
    }

    ~TestClass()
    {
        std::cout << this <<  "dtor " <<endl;
        delete this->ptr;
    }


    int x;          
    int * ptr;      
};


int main()
{
    TestClass testObj;
    TestClass testObj1;
    TestClass testObj2;
    TestClass testObj3;
    
    cout << *testObj.ptr << endl;

    return 0;
}


///@note order of dtor is opposite to that of ctor