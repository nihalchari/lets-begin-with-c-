#include<iostream>
using namespace std;

class Complex
{
    ///@note access specifier can be public or private or protected
    /// for class by default members are private, for structure by default is public
  
    public:
    //member functions or methods or behaviours
    void getData()
    {
        if(validateData())
        {
            cout << "id :" << id << endl; 
            cout << "name :" << name << endl;
        }
        else
        {
            cout << "no valid data available" << endl;
        }
        
    }

    void setData()
    {
        cout << "Enter id" << endl;
        cin >> id;
        cout << "Enter name" << endl;
        cin >> name;
    }

    private:
    bool validateData()
    {
        ///logic for data validation
        cout << "Validating data...." << endl;
        return true;
    }

    private:
    //data members or fields or attributes
    int id;
    char name[20];
};

class EmptyClass
{
};

int main()
{
    /// object or instance
    Complex testObj;

    // /// size of object will be size of data members of class
    // cout << "size testClass obj: " << sizeof(testObj) << endl;

    EmptyClass emptyObj;
    // ///size of empty class is 1 byte
    // cout << "size emptyClass obj: " << sizeof(emptyObj) << endl << endl;

    /// accesing data members from object
    testObj.setData();
    testObj.getData();
    testObj.getData();
}

