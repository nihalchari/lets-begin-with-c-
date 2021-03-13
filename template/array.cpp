#include <iostream>
using namespace std;

template <typename T> class Array { // T is template parameter
public:
  Array(int size) {
    this->size = size;
    if (this->size == 0)
      this->ptr = nullptr;
    if (this->size > 0)
      this->ptr = new T[this->size];
  }

  void acceptRecords() {
    for (uint16_t i = 0; i < this->size; ++i) {
      cout << "Enter element :";
      cin >> this->ptr[i];
    }
  }

  void printRecord() const {
    for (uint16_t i = 0; i < this->size; ++i) {
      cout << this->ptr[i] << endl;
    }
  }

  void resize(int size) {
    if (size < this->size || size > this->size) {
      T *a = new T[size];
      for (int i = 0; i < size; ++i) {
        a[i] = this->ptr[i];
      }
      this->size = size;
      this->~Array();
      this->ptr = a;
    }
  }

  ~Array() {
    if (this->ptr != nullptr) {
      delete[] this->ptr;
      this->ptr = nullptr;
    }
  }

private:
  int size;
  T *ptr;
};

// int main() {
//   Array<int> a1{5}; // template argument
//   a1.acceptRecords();
//   // a1.resize(3);
//   a1.printRecord();
//   return 0;
// }

int main() {
  Array<int> a1{3};
  a1.acceptRecords();
  //   a1.resize(2);
  a1.printRecord();

  Array<double> d1{3};
  d1.acceptRecords();
  d1.printRecord();

  Array<char> c1{3};
  c1.acceptRecords();
  c1.printRecord();

  Array<std::string> s1{3};
  s1.acceptRecords();
  s1.printRecord();

  return 0;
}