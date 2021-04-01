#include <iostream>
using namespace std;

class Base
{

public:
  Base(int n1, int n2) : num1(n1), num2(n2) {}
  void displayBaseRecord() { cout << num1 << endl
                                  << num2 << endl; }

  int num1;
  int num2;
};

class Derived : public Base
{
public:
  Derived(int n1, int n2, int n3) : Base(n1, n2), num3(n3) {}
  void displayDerivedRecord()
  {
    this->displayBaseRecord();
    cout << num3 << endl;
  }

private:
  int num3;
};

int main()
{
  Base b(10, 20);
  // b.displayBaseRecord();

  Derived d(100, 200, 300);
  // d.displayDerivedRecord();

  b = d;
  b.displayBaseRecord();
}