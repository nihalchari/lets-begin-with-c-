#include <iostream>
using namespace std;

class VirtualClass
{
    virtual void fun1()
    {
    }

    virtual void fun2()
    {
    }

private:
    //vptr = base addrerss of vtable
    int n1;
    int n2;
};

int main()
{

    VirtualClass obj;

    cout << sizeof(obj) << endl;

    return 0;
}