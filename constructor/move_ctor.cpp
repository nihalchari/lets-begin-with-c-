#include <iostream>
#include <vector>
using namespace std;

///@brief for effiecient memory use

class TestClass {
public:
  int size;
  int *arr;

  TestClass() {
    cout << "ctor TestClass() parameterless " << this << endl;
    size = 6;
    arr = new int[size];
  }

  TestClass(size_t size) {
    cout << "ctor TestClass(int val) parameterized " << this << endl;
    this->size = size;
    arr = new int[size];
  }

  TestClass(const TestClass &other) {
    cout << "copy ctor TestClass(const TestClass& other) " << this << endl;
    this->size = other.size;
    this->arr = new int[size];
    for (uint32_t i = 0; i < size; ++i) {
      arr[i] = other.arr[i];
    }
  }
  TestClass(TestClass &&other) : size(0), arr(nullptr) {
    cout << "move TestClass(const TestClass& other) " << this << endl;

    this->size = other.size;
    this->arr = other.arr;

    other.size = 0;
    other.arr = nullptr;
  }

  ~TestClass() {
    std::cout << "dtor " << this << endl;
    delete[] arr;
  }
};

TestClass fun(TestClass obj) { return obj; }

int main() {
  TestClass obj1{5};
  TestClass obj2{std::move(obj1)};
  fun(TestClass{});

  std::vector<TestClass> vec;
  vec.push_back(std::move(obj2));

  return 0;
}
