#include <iostream>
using namespace std;

template <typename K, typename V> class Pair {
public:
  Pair(K key = K{}, V value = V{}) : key(key), value(value) {}

  void printRecords() {
    cout << "key : " << this->key << "   value : " << this->value << endl;
  }

private:
  K key;
  V value;
};

int main() {
  int n;
  Pair<int, string> p;
  Pair<int, string> p1(1, "one");
  Pair<char, double> p2('A', 2.2);

  p.printRecords();
  p1.printRecords();
  p2.printRecords();
  return 0;
}