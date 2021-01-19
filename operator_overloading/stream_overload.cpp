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

  Complex operator+(const Complex &other) {
    Complex temp;
    temp.real = this->real + other.real;
    temp.img = this->img + other.img;
    return temp;
  }

  Complex operator-(const Complex &other) {
    Complex temp;
    temp.real = this->real - other.real;
    temp.img = this->img - other.img;
    return temp;
  }

  friend ostream &operator<<(ostream &cout, Complex &obj);
};

//  operator<<(cout, addCmplx)
ostream &operator<<(ostream &cout, Complex &obj) {
  cout << obj.real << endl;
  cout << obj.img << endl;
  return cout;
}

int main() {
  Complex obj1{3, 5};
  Complex obj2{3, 5};

  auto addCmplx = obj1 + obj2; // operator(obj1,obj2)
  auto subCmplx = obj1 - obj2;

  int x = 5;
  int y = 6;
  // cout << x << endl << y << endl;

  // addCmplx.showRecords();
  cout << addCmplx
       << subCmplx; //   operator<<(operator<<(cout, addCmplx),subCmplx)
  ()[] >>

      return 0;
}