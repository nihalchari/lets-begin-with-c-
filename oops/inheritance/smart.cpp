#include <iostream>
#include <memory>
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

int main()
{

    unique_ptr<Base> ptr1(new Base{1, 2});
    ptr1->showRecords();
}