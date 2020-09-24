#include<iostream>
using namespace std;

class TestCalss
{
    public:   
    int id;

    //classname * const this
    //TestClass * const this
    void getAddress()
    {
       std::cout <<   "inside member function    :" << this << endl; 
    }
};

int main()
{
    TestCalss testObj1;
    TestCalss testObj2;

    cout << "for testObj1" << endl;
    std::cout << "inside main               :" << &testObj1 << endl;
    testObj1.getAddress();
    
    cout << "\n\nfor testObj1" <<endl;
    std::cout << "inside main               :" << &testObj2 << endl;
    testObj2.getAddress();

    

    return 0;

    // testObj1.setId(11);
    // testObj2.setId(22);
    // testObj1.printId();
    // testObj2.printId();


    // void setId(int val)
    // {
    //     id=val;
    //     this->id = val;
    // }

    // void printId()
    // {
    //     cout <<"this->id :" << this->id << endl;
    //     cout <<"id       :" << id << endl;
    // }

}

