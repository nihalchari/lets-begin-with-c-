#include <cstring>
#include <iostream>
using namespace std;

class String {
private:
  size_t length;
  char *buffer;

public:
  String() {
    cout << "String() parameterless\n";
    this->length = 0;
    this->buffer = nullptr;
  }

  String(const char *str) {
    cout << "String(const char * str)  parameterized\n";
    this->length = strlen(str);
    this->buffer = new char[this->length + 1];
    strcpy(this->buffer, str);
  }

  String(const String &other) {
    cout << "String(const String& other) copy ctor\n";
    this->length = other.length;
    this->buffer = new char[this->length];
    strcpy(this->buffer, other.buffer);
  }

  // String(const String &&other) {
  //   cout << "String(const String&& other) move ctor\n";
  //   this->length = other.length;
  //   this->buffer = other.buffer;
  //   other.~String();
  // }

  String operator=(const String &other) {
    cout << "String operator=(const String& other) copy assign\n";
    this->~String();
    this->length = other.length;
    this->buffer = new char[this->length];
    strcpy(this->buffer, other.buffer);
  }

  String operator=(const String &&other) {
    cout << "String operator=(const String&& other) move assign\n";
    this->~String();
    this->length = other.length;
    this->buffer = other.buffer;
    other.~String();
  }

  ~String() {
    // cout << "dtor\n";
    if (this->buffer != nullptr) {
      this->length = 0;
      delete[] this->buffer;
      this->buffer = nullptr;
    }
  }

  // void operator()(const char *str) {
  //   this->~String();
  //   this->length = strlen(str);
  //   this->buffer = new char[this->length + 1];
  //   strcpy(this->buffer, str);
  // }

  void displayString() { cout << this->buffer << endl; }
};

int main(void) {

  String str1;
  String str2{"abc"};
}

int main1() {
  // s1("Robert"); // s2-> Funtion object or Functor     s1.operator()("Robert")
}