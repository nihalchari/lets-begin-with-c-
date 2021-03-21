#include <iostream>
#include <thread>
using namespace std;

int main() {
  int *iptr = NULL;
  char *cptr = NULL;
  char carr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  cptr = (char *)carr;
  iptr = (int *)carr;
  cout << "before increment\n";
  cout << "cptr =" << cptr << endl;
  cout << "iptr = " << iptr << endl;
  //   cout << "arr =" << carr << endl;
  cout << "after increment" << endl;
  ++cptr;
  ++iptr;
  cout << "cptr =" << cptr << endl;
  cout << "iptr = " << iptr << endl;

  cout << "cptr =" << cptr << "  *cptr =" << *cptr << endl;
  cout << "iptr =" << iptr << "  *iptr =" << *iptr << endl;
  cout << 0x07060504 << endl;

  std::thread obj;

  obj.join();

  return 0;
}