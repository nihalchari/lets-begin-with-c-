#include <iostream>
using namespace std;

class Complex {
  int real;
  int img;

public:
  Complex() : real(0), img(0) { cout << "Complex() parameterless\n"; }

  Complex(int num1, int num2) : real(num1), img(num2) {
    cout << "Complex(int num1, int num2) parameterized\n";
  }

  Complex(const Complex &other) {
    cout << "Complex(const Complex &other) Copy ctor\n";
    this->img = other.img;
    this->real = other.real;
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

  friend ostream &operator<<(ostream &cout, Complex &other);

  void operator=(const Complex &other) {
    cout << "void operator=(const Complex &other) copy assign operator\n";
    this->img = other.img;
    this->real = other.real;
  }

  void operator=(Complex &&other) {
    cout << "void operator=(const Complex &other) move assign operator\n";
    if (this != &other) {
      this->img = other.img;
      this->real = other.real;
      other.img = 0;
      other.real = 0;
    }
  }
};

ostream &operator<<(ostream &cout, Complex &other) {
  cout << "Real : " << other.real << endl;
  cout << "Img  : " << other.img << endl;
  return cout;
}

int main() {
  Complex obj1{};
  Complex obj2{4, 8};
  Complex obj3 = obj2;

  obj1 = std::move(obj2); // obj1.operator=(obj2)
  cout << obj1;

  return 0;
}