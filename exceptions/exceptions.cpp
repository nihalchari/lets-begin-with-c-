#include <fcntl.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

// class Arithmatic {

// public:
//   Arithmatic(string message) : message(message) {}

//   string getMessage(void) { return message; }

// private:
//   string message;
// };

int main() {
  auto fd = open("test.txt", O_CREAT);
  auto ptr = new int(4);

  cout << "enter nos\n";
  int num1{0};
  int num2{0};
  cin >> num1 >> num2;

  auto res = num1 / num2;

  cout << "file closed\n";
  cout << "memory freed\n";

  // rest of th code.....

  return 0;
}