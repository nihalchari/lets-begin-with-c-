#include <iostream>
using namespace std;

class Test {
public:
  Test() : x(10), y(20) {
    ///@note its allowed to modify in this case, may be becoz u can declare
    /// non const obj also
    this->x = 10;
    this->y = 20;
    ++this->x;
  }

  void incrementData() const {
    ++this->x;
    ++this->y;
  }

  int printData() const {
    // ++this->x;
    // ++this->y;
    cout << x << endl;
    cout << y << endl;
  }

  // private:
public:
  mutable int x;
  mutable int y;
  // mutable
};

int main() {
  Test t1;
  t1.incrementData();
  //   t1.printData();
  t1.x = 33;

  const Test t2;
  t2.incrementData();
  //   t2.x = 100;
  t2.printData();

  // ++t2.y;
  return 0;
}

///@note u cannot call non-const member function on const object (only const
/// member function can be called )but,
/// u can call both const and non-const member function on non const object.