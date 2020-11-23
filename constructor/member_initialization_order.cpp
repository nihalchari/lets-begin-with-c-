#include<iostream>
using namespace std;

class Test
{
    ///@note members of class will get initilalized depending upon oder of their declaration,
    /// and not on oder of initialization in constructor

    ///@brief in below ctor x will get initialize i.e. x(y+10), at this point y is yet to inilialize hence,
    /// y will contain garbage value, therefore x will also initialized with garbage

    public:
    Test():y(10),x(y+10)
    {
        
    }
    int x;
    int y;
};

int main()
{
    Test obj;

    cout << "x= " << obj.x << endl;
    cout << "y= " << obj.y << endl;
    
    return 0;
}