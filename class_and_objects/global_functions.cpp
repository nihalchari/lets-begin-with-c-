#include<iostream>
using namespace std;

class Complex
{
    public:
    void initComplex(int _real, int _img)
    {
        this->img = _img;
        real=_real;   
    }

    void printComplex()
    {
        cout <<"this->real :" << this->real << endl;
        cout <<"img       :" << img << endl;
    }

    int getImg()
    {
        return img;
    }

    int Complex::getReal()
    {
        return real;
    }


    private:   
    int real;
    int img;
};




Complex sum(Complex lhs, Complex rhs)
{
    Complex temp;
    int real;
    int img;

    real = lhs.getReal() + rhs.getReal();
    img  = lhs.getImg() + rhs.getImg();
    temp.initComplex(real,img);
    return temp;         
}

int main()
{
    Complex testObj1;   
    Complex testObj2;

    testObj1.initComplex(10,100);   
    testObj2.initComplex(20,200);

    Complex res = sum(testObj1, testObj2);
    res.printComplex();
    
    return 0;
}
