#include <iostream>
using namespace std;

class Complex {

  int real;
  int img;

public:
  Complex() : real(0), img(0) {}

  Complex(int num1, int num2) : real(num1), img(num2) {}

  void showRecords() {
    cout << "real: " << this->real << endl;
    cout << "imag: " << this->img << endl;
  }

  // Complex operator+(const Complex& other)
  // {
  //    Complex temp;
  //    temp.real = this->real + other.real;
  //    temp.img = this->img + other.img;
  //    return temp;
  // }

  Complex operator-(const Complex &other) {
    Complex temp;
    temp.real = this->real - other.real;
    temp.img = this->img - other.img;
    return temp;
  }

  int getReal() { return this->real; }

  int getImg() { return this->img; }
};

Complex operator+(Complex &rhs, Complex &lhs) {
  auto real = rhs.getReal() + lhs.getReal();
  auto img = rhs.getImg() + lhs.getImg();
  return Complex(real, img);
}

int main() {
  Complex obj1{3, 5};
  Complex obj2{3, 5};

  auto addCmplx = obj1 + obj2; // obj1.operator+(obj2)
  addCmplx.showRecords();

  return 0;
}