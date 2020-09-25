#include<iostream>
using namespace std;

class Complex
{
    private:
    int x;
    int y;

    public:
    void setData(const int& val1, const int& val2)
    {
        x= val1;
        y =val2;
    }

    int divide()
    {
        return x/y;
    }
};

int main()
{
    Complex testObj;
    int a=10, b=20;

    testObj.setData(a,b);
    auto result = testObj.divide();
    std::cout << result << endl;
    
    return 0;
}

