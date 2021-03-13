#include <iostream>
using namespace std;

class Math {
public:
  static int pow(int base, int exp) {
    int res = 1;
    for (int i = 1; i <= exp; ++i) {
      res = res * base;
    }
    return res;
  }

  int n1;
  float f1;
};

int main() {

  cout << Math::pow(2, 3) << endl;

  return 0;
}
