#include <iostream>
using namespace std;

class Base {

public:
  Base() : x(100) {}
  void displayRecord() { cout << "Base::displayRecord()" << endl; }
  int x;
};

class Derived : public Base {
public:
  Derived() : x(200) {}
  //   void displayRecord() { cout << "Derived::displayRecord()" << endl; }
  int x;
};

int main() {
  Derived d;
  //   d.displayRecord();
  //   d.Base::displayRecord();

  cout << d.x << endl;
  cout << d.Base::x << endl;
}