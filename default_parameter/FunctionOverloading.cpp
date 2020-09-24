#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

float add(float a, float b)
{
    return a+b;
}


double add(double a, double b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

float add(int a, float b)
{
    return float(a+b);
}


int main()
{
    auto x = add(1,2);
    std::cout << "x : " << x << endl;

    auto y = add(1.2f, 1.3f);
    std::cout << "y : " << y << endl;
    
    auto z = add(2.2, 3.3);
    std::cout << "z : " << z << endl;
    
    auto k = add(10, 10, 10);
    std::cout << "k : " << k << endl;
    
    auto r = add(1, 1.3f);
    std::cout << "r : " << r << endl;

    return 0;
}


