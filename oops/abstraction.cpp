#include <iostream>
using namespace std;

class Division {
public:
  Division(int n1 = 0, int n2 = 0) : num1(n1), num2(n2) {}

  int divide() {
    if (isValid() && !(isNum2Zero())) {
      return num1 / num2;
    }

    return 0;
  }

  // void get() {}
  // void set(n1, n2) {}

private:
  bool isValid() {
    if (num1 > 0 && num2 > 0) {
      return true;
    }
    return false;
  }

  bool isNum2Zero() {
    if (0 == num2) {
      return true;
    }
    return false;
  }

private:
  int num1;
  int num2;
};

int main(void) {
  Division d(4, 2);
  if (auto res = d.divide()) {
    cout << "res :" << res << endl;
  } else {
    cout << "invalid\n";
  }
}