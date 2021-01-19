#include <iostream>
using namespace std;

class Array {

private:
  size_t size;
  int *arr;

public:
  Array() {
    this->size = 0;
    this->arr = nullptr;
  }

  Array(size_t size) {
    this->size = size;
    this->arr = new int[this->size];
  }

  ~Array() {
    this->size = 0;
    delete[] this->arr;
  }

  void acceptRecords() {
    if (this != nullptr) {
      int val;
      for (size_t x = 0; x < this->size; ++x) {
        cout << "Enter Value\n";
        cin >> val;
        this->arr[x] = val;
      }
    }
  }

  void printRecords() {
    if (this != nullptr) {
      int val;
      cout << endl;
      for (size_t x = 0; x < this->size; ++x) {
        cout << this->arr[x] << endl;
      }
    }
  }
};

int main() {
  Array arr{5};
  arr.acceptRecords();
  arr.printRecords();
  return 0;
}
