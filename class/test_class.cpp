#include<iostream>
using namespace std;

class TestCalss
{
    ///@note access specifier can be public or private or protected
    /// for class by default members are private, for structure by default is public
    public:

    //data members or fields or attributes
    int id;
    char name[20];

    //member functions or methods or behaviours
    void getData()
    {
        cout << "id :" << id << endl; 
        cout << "name :" << name << endl;
    }

    void setData()
    {
        cout << "Enter id" << endl;
        cin >> id;
        cout << "Enter name" << endl;
        cin >> name;

    }
};

class EmptyClass
{
};

int main()
{
    /// object or instance
    TestCalss testObj;

    /// size of object will be size of data members of class
    cout << "size testClass obj: " << sizeof(testObj) << endl;

    EmptyClass emptyObj;
    ///size of empty class is 1 byte
    cout << "size emptyClass obj: " << sizeof(emptyObj) << endl << endl;

    /// accesing data members from object
    testObj.setData();
    testObj.getData();
    testObj.id = 100;
    testObj.getData();
}
