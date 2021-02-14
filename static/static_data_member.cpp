#include <iostream>
using namespace std;
void fun(void);

class test {
public:
  test(int n1 = 0, int n2 = 0) {
    this->num1 = n1;
    this->num2 = n2;
    // this->num3 = 333; // do not initialize here, as staic is class variable
  }

  int num1;        // instance var, gets space once per instance/object
  int num2;        // instance var, gets space once per instance/object
  static int num3; // class level var, gets space once per class
  const static int s_constNum; // class level var, gets space once per class
};

int test::num3; // mandatory to define static member in global space(better to
                // inilialize else default initalized to 0)
const int test::s_constNum = 100; // mandatory to define + initialize
///@note above statements only meant for definition, if declared as private,
/// then can be accessed only inside class

int main() {
  test t1{1, 20};
  // cout << sizeof(t1) << endl;
  test t2{2, 20};
  // cout << sizeof(t2) << endl;
  test t3{3, 30};
  // cout << sizeof(t3) << endl;

  ///@note can be accessed directly as declared as public inside class
  cout << test::num3 << endl;
  cout << test::s_constNum << endl;
  fun();
  fun();
}

void fun(void) {
  // static int x;
  static test t4{4, 40};
  cout << t4.num1 << " " << t4.num2 << endl;
  ++t4.num1;
}

///@note It is mandatory to define(to allocate memory) static data member in
/// global space, else linker error.
///@note do not initialize static data member inside ctor(initialize in global
/// definition else it will default initialize to 0)
///@note static data member can be const, must initialize in global definition
///@note use class name and scope resolution operator to acess static member
///@note if u want to declare data member as const, try to make it static as
/// well
