#include <fcntl.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

class Arithmatic {

public:
  Arithmatic(string message) : message(message) {}

  string getMessage(void) { return message; }

private:
  string message;
};

template <typename T> T calulate(T num1, T num2) {
  if (num1 < 0 || num2 < 0)
    throw string("-ve number");

  if (num2 == 0)
    // throw Arithmatic("devide by 0");
    throw 2.2f;

  auto res = num1 / num2;
}

int main() {
  auto fd = open("test.txt", O_CREAT);
  auto ptr = new int(4);

  cout << "enter nos\n";
  int num1{0};
  int num2{0};
  cin >> num1 >> num2;

  try {
    calulate(num1, num2);

  } catch (int ex) {
    cout << "int Ex :" << ex << endl;
  }

  catch (string ex) {
    cout << "String Ex :" << ex << endl;
  }

  catch (Arithmatic ex) {
    cout << "Arithmatic Ex :" << ex.getMessage() << endl;
  } catch (...) {
    cout << "generic catch \n";
  }

  delete ptr;
  close(fd);
  cout << "file closed\n";
  cout << "memory freed\n";

  // rest of th code.....

  return 0;
}