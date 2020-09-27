#include<iostream>
using namespace std;

///@note if data member is const, then it is necessary to initialize that member in ctor initializer list only
///@note if data member is const, compiler will implicitly delete default ctor
///@note cannot modify const data member, niether inside member function nor through class object


class Test
{
    public:
    Test():x(10),y(20)
    {
        // x=10;
        // y=20;
    }
    
    void incrementData()
    {
        // ++this->x;
        // ++this->y;
        cout << x << endl;
        cout << y << endl;
    }

    // private:
    public:
     const int x;
     const int y;
};


int main()
{
    Test t1;
    t1.incrementData();
    // ++t1.x;

    return 0;
}

