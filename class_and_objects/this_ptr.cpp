#include <iostream>
using namespace std;

///@brief 'this' is implicit pointer available in every non-static member function of class,
/// which stores address of calling object
/// Data member and member functions communicate through 'this' pointer

///@note 'this' pointer is not available in global function, static member function, and friend funtion
///global and local variable are not accessible through this pointer

///signature of this pointer : classname * const this

class Complex
{
public:
    void getAddress()
    {
        std::cout << "inside member function    :" << this << endl;
    }

    void initComplex(int _real, int _img)
    {
        ///TestClass * const this
        this->img = _img;
        real = _real;
    }

    void printComplex()
    {
        cout << "this->real :" << this->real << endl;
        cout << "img       :" << img << endl;
    }

    Complex sum(Complex other)
    {
        Complex temp;
        temp.img = this->img + other.img;
        temp.real = this->real + other.real;
        return temp;
    }

    ///@note not reccomended, only for demo, use other overload of sum
    Complex sum(const Complex &lhs, const Complex &rhs)
    {
        Complex temp;
        temp.img = lhs.img + rhs.img;
        temp.real = lhs.real + rhs.real;
        return temp;
    }

private:
    int real;
    int img;
};

int main()
{
    Complex testObj1;
    Complex testObj2;

    cout << "for testObj1" << endl;
    std::cout << "inside main               :" << &testObj1 << endl;
    testObj1.getAddress();
    cout << "\n\nfor testObj1" << endl;
    std::cout << "inside main               :" << &testObj2 << endl;
    testObj2.getAddress();

    testObj1.initComplex(10, 100);
    testObj2.initComplex(20, 200);

    testObj1.printComplex();

    Complex res = testObj1.sum(testObj2);
    res.printComplex();

    ///@note not possible as real and img both are private
    // Complex C.real = testObj1.real + testObj2.real;    //30, 300

    ///@note not reccomended, only for demo, use other overload of sum
    Complex res1 = testObj1.sum(testObj1, testObj2);
    res1.printComplex();

    return 0;
}

/*
this *, is implicit pointer variable which is available in every  non-static member fn of class which is used to store addr of calling obj.

Data member and member fun communicate tru each otr thru this *


Generic type of this *
ClassName *const this;

Since this* stores address of obj, only data members are accessible using this *, local and global vars are not accessible

This * is not available inside global fn, static member fn, friend fn
*/