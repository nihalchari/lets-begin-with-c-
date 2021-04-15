#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        //vptr=vtable;
    }
    virtual void fun1()
    {
    }

    virtual void fun2()
    {
    }

private:
    //vptr
    int n1;
    int n2;
};

int main()
{
    Test obj;
    cout << sizeof(obj) << endl;
    return 0;
}