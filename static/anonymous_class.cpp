#include <iostream>
using namespace std;

class {
public:
  void displayRecords() { cout << "displayRecords()" << endl; }
  static void printRecords() { cout << "printRecords()" << endl; }
} obj1, obj2;

int main() {

  obj1.displayRecords();
  obj1.printRecords();
  obj2.displayRecords();
  obj2.printRecords();

  return 0;
}