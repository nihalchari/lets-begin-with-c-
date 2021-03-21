#include <iostream>
using namespace std;

int fun(int num) {
  ++num;
  return num;
}

template <typename T> T fun1(T num) {
  ++num;
  return num;
}

int main(void) {
  auto res = fun(1.2f);
  cout << res << endl;

  res = fun1<int>(2.2f);
  cout << res << endl;

  return 0;
}