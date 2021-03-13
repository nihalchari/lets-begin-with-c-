#include <iostream>
#include <vector>
using namespace std;

int main() {
  //
  std::vector<int> vec{1, 2, 3, 4, 5};

  auto itr = vec.begin();

  cout << *itr << endl;

  itr = vec.end();
  cout << *itr << endl;

  itr = vec.end() - 1;
  cout << *itr << endl;
}
