#include <iostream>
using namespace std;

class Base
{
public:
    Base(int n1, int n2) : num1(n1), num2(n2) { cout << "Base ctor\n"; }

    virtual void showRecords() { cout << num1 << endl
                                      << num2 << endl; }

    ~Base()
    {
        cout << "Base Dtor\n";
    }

    int num1;
    int num2;
};

class Derived : public Base
{
public:
    Derived(int n1, int n2, int n3) : Base(n1, n2), num3(n3) { cout << "Derived Ctor\n"; }
    void showRecords()
    {
        Base::showRecords();
        cout << num3 << endl;
    }

    ~Derived()
    {
        cout << "Derived Dtor\n";
    }

    int num3;
};

int main()
{
    Base *bptr = new Derived{10, 20, 30};
    delete bptr;
}