#include <fcntl.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

// class Arithmatic {

// public:
//   Arithmatic(string message) : message(message) {}

//   string getMessage(void) { return message; }

// private:
//   string message;
// };

int main() {
  auto fd = open("test.txt", O_CREAT, O_RDWR);
  std::cout << "enter nos\n";
  int num1{0};
  int num2{0};
  auto res = new int;

  cin >> num1 >> num2;

  try {
    if (num2 == 0)
      throw 99;
    *res = num1 / num2;
  } catch (int ex) {
    cout << "cought exception " << ex << endl;
  }
  // logic to write result in text.txt file

  close(fd);
  std::cout << "file closed\n";
  delete res;
  std::cout << "memory freed\n";

  // rest of th code.....

  return 0;
}