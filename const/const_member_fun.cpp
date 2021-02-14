#include <iostream>
using namespace std;

///@note only non-static member function can be declared const, not supported
/// for static member function and global function and constructor

void globalFun() {}

int globalVar = 50;

class Test {
public:
  Test() : x(10), y(20) {
    // x=10;
    // y=20;
  }

  void incrementData() {
    ++this->x;
    ++this->y;
  }

  ///@note when u define member function with const qualifier, u cannot change
  /// the state of data members inside that member function but u can change
  /// local or global var inside member function
  int printData() const {
    int localVar = 5;
    ++localVar;
    ++globalVar;

    // ++this->x;
    // ++this->y;
    cout << x << endl;
    cout << y << endl;
  }

  static void fun() {}

private:
  int x;
  int y;
  // mutable
};

int main() {
  Test t1;
  t1.incrementData();
  t1.printData();
  return 0;
}