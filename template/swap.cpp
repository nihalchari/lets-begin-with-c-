#include <iostream>
using namespace std;

template <typename T> void Swap(T &p1, T &p2) {
  T temp{};
  temp = p1;
  p1 = p2;
  p2 = temp;
}

template <typename T, typename V> void fun(T a1, V a2) { cout << a1; }

int main(void) {

  int a = 1;
  int b = 2;
  Swap<int>(a, b);
  // cout << "a = " << a << "  b = " << b << endl;

  char ch1 = 'A';
  char ch2 = 'B';
  Swap<>(ch1, ch2);
  // cout << "ch1 = " << ch1 << "  ch2 = " << ch2 << endl;

  float f1 = 10.1;
  float f2 = 20.2;

  Swap<float>(f1, f2);
  // cout << "f1 = " << f1 << "  f2 = " << f2 << endl;

  return 0;
}