#include <fcntl.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

class Arithmatic {

public:
  Arithmatic(string message) : message(message) {}

  string getMessage(void) { return message; }

private:
  string message;
};

void devide() {

  cout << "enter nos\n";
  int num1 = 0, num2 = 0;
  cin >> num1 >> num2;
  try {
    if (num1 < 0 || num2 < 0)
      throw string("-ve number");

    if (num2 == 0)
      throw Arithmatic("devide by 0");

    auto res = num1 / num2;
  } catch (int ex) {
    cout << "int Ex :" << ex << endl;
  }

  catch (string ex) {
    cout << "String Ex :" << ex << endl;
  }

  catch (Arithmatic ex) {
    cout << "Arithmatic Ex :" << ex.getMessage() << endl;
  }
  cout << "exits devide()\n";
}

void calculate(void) {
  devide();
  cout << "exits calculate\n";
}

void fun(void) {

  calculate();
  cout << "exits fun()\n";
}

int main() {
  // try {
  fun();
  // }
  cout << "Exits main()\n";

  cout << "file closed\n";
  return 0;
}