#include <iostream>
using namespace std;

class test {
public:
  test() : num1(0), num2(0) {}

  void setNum1(int value) { this->num1 = value; }

  void setNum2(int value) { this->num2 = value; }

  static void setNum3(int value) { test::num3 = value; }

  void displayRecords(void) {
    cout << "num1 :" << this->num1 << endl;
    cout << "num2 :" << this->num2 << endl;
    cout << "num3 :" << test::num3 << endl;
  }

  // private:
  int num1;
  int num2;
  static int num3;
};

int test::num3;

int main() {
  test t1{};

  t1.setNum1(10); // t1.setNum1(&t1,10)
  t1.setNum2(20);

  t1.displayRecords();
  return 0;
}

///@note you cannot access non-static data-members in static member function
///@note you can access both static and non-static data-members in non-static
/// member function
///@note ctor, dtor, main, virtual and volatile function cant be declared as
/// staic
///@note TRIK: if functioned need not require to call on object, or function is
/// not designed to change state of data-members, or function do not require to
/// use this * passed implicitly, then such function could be defined as static
