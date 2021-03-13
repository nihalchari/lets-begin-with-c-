#include <iostream>
using namespace std;

///@brief Singleton is a design pattern, where you can create only one object of
/// class. make ctor private and create object in member function(factory
/// method)
///@brief Factory method, member function which hides object creation from end
/// user

class Singleton {
private:
  Singleton(int n = 0) { this->num = n; }
  Singleton(const Singleton &other) { this->num = other.num; }

public:
  static Singleton &getInstance(void) {
    static Singleton instance;
    cout << &instance << endl;
    return instance;
  }

private:
  int num;
};

int main() {
  Singleton &s1 = Singleton::getInstance();
  cout << &s1 << endl;
  // Singleton &s2 = Singleton::getInstance();
  // cout << &s2 << endl;
  // Singleton &s3 = Singleton::getInstance();
  // cout << &s3 << endl;
  return 0;
}