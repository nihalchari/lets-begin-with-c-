#include <iostream>
#include <vector>
using namespace std;

///@brief vector::capacity depends on the implementation, so don't expect the
/// same pattern when you switch the operating system, the compiler, etc.
void capacity() {
  vector<int> testVector;
  for (int i = 0; i < 100; ++i) {
    testVector.push_back(i);
    cout << testVector.capacity();
    cout << ", ";
  }
  cout << "\ncapacity::testVector.size() : " << testVector.size() << endl;
}

void iterate(void) {
  vector<int> testVector{10, 20, 30, 40, 50};

  for (auto it1 = testVector.begin(); it1 < testVector.end(); ++it1) {
    cout << *it1 << " ";
  }
  cout << std::endl;
}

template <typename T> void print(vector<T> vec) {
  for (const auto &ele : vec) {
    cout << ele << " ";
  }
  cout << endl;
}

int main() {
  vector<int> nodeContainer{1, 2, 3, 4, 5};
  // capacity();
  // iterate();

  // nodeContainer.clear();
  // if (nodeContainer.empty()) {
  //   cout << "nodeContainer is empty\n";
  // }

  // auto x = nodeContainer.at(1);   //boundary checks are taken care.
  // cout << "x=" << endl;
  // nodeContainer.at(2) = 200;
  // print(nodeContainer);

  vector<int> copyVec{};
  // copyVec.assign(nodeContainer.begin(), nodeContainer.end());
  // print(copyVec);

  // int arr[5] = {100, 200, 300, 400, 500};
  // copyVec.assign(arr, arr + 2);
  // print(copyVec);
  // copyVec.assign(3, 30);
  // print(copyVec);
  copyVec.assign({11, 22, 33, 44, 55, 66, 77});
  // print(copyVec);

  // cout << nodeContainer.max_size() << endl << copyVec.max_size() << endl;

  // nodeContainer.swap(copyVec);
  // print(nodeContainer);
  // print(copyVec);

  // nodeContainer = copyVec;
  // print(nodeContainer);
  // print(copyVec);
}