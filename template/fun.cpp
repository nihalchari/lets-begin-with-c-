
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 1, b = 2;

  /// some logic
  /// some logic

  int temp = a;
  a = b;
  b = temp;

  /*
    some code here


  */

  int c = 3, d = 4;
  temp = c;
  c = d;
  d = temp;

  swap(a, b);
  swap(c, d);
}