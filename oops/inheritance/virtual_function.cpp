#include <iostream>
using namespace std;

class Base {

public:
  Base(int n1, int n2) : num1(n1), num2(n2) {}
  void printRecord() { cout << num1 << endl << num2 << endl; }
  void acceptRecords() {
    cout << "enter num1\n";
    cin >> num1;
    cout << "enter num2\n";
    cin >> num2;
  }

private:
  int num1;
  int num2;
};

class Derived : public Base {
public:
  Derived(int n1, int n2, int n3) : Base(n1, n2), num3(n3) {}
  void acceptRecords() {
    Base::acceptRecords();
    cout << "enter num3\n";
    cin >> num3;
  }

  void printRecord() {
    Base::printRecord();
    cout << num3 << endl;
  }

private:
  int num3;
};

int main() {
  Base *basePtr = new Derived{100, 200, 300};

  basePtr->acceptRecords();
  basePtr->printRecord();
  return 0;
}