#include <iostream>
using namespace std;

class Test {
private:
  int num;
  void setNum(int x) { num = x; }

public:
  Test() : num(0) {}

  Test(int x) : num(x) {}

  int getNum() { return num; }

  friend void testFun();
  friend int main();
};

void testFun() {
  Test testObj(10);
  cout << testObj.getNum() << endl;
  testObj.setNum(100);
  cout << testObj.num << endl;
}

int main() {
  testFun();
  Test obj;
  cout << obj.num << endl;

  return 0;
}
