#include <iostream>
using namespace std;

class Base
{

public:
  Base() : publicData(1), protectedData(2), privateData(3) {}

  void baseRecords() const
  {
    cout << this->publicData << endl;
    cout << this->protectedData << endl;
    cout << this->privateData << endl;
  }

public:
  int publicData;

protected:
  int protectedData;

private:
  int privateData;
};

class Derived : public Base
{
public:
  Derived() : Base(){};

  void derivedRecords() const
  {
    cout << this->publicData << endl;
    cout << this->protectedData << endl;
  }
};

int main()
{
  Base b;

  // cout << sizeof(b) << endl;
  //   b.publicData = 5;
  //   b.baseRecords();

  Derived d;
  cout << sizeof(d) << endl;
  //   d.derivedRecords();
  // d.baseRecords();

  return 0;
}