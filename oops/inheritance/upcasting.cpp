#include <iostream>
using namespace std;

class Base
{
public:
  Base(int n1, int n2) : num1(n1), num2(n2) {}
  void displayBase() { cout << num1 << endl
                            << num2 << endl; }
  void showRecords() { cout << num1 << endl
                            << num2 << endl; }

  int num1;
  int num2;
};

class Derived : public Base
{
public:
  Derived(int n1, int n2, int n3) : Base(n1, n2), num3(n3) {}
  void showRecords()
  {
    Base::showRecords();
    cout << num3 << endl;
  }

  void displayDerived()
  {
    this->displayBase();
    cout << num3 << endl;
  }

  int num3;
};

int main()
{
  // Base base{10, 20};
  // Base *basePtr = &base;
  // base.displayBase();

  // Derived derived{100, 200, 300};
  // Derived *dptr = &derived;
  // dptr->displayDerived();

  ///@note upcasting : base class ptr can store address of derived class
  ///@note minimizes object dependency and thus reduces maintenance of the
  /// code.

  Base *basePtr = new Derived{111, 222, 333}; // typecasting is optional

  basePtr->showRecords();

  Derived *dptr = (Derived *)basePtr; // explicit typecasting is required
  dptr->showRecords();
}
