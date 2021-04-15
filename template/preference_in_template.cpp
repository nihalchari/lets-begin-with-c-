#include <iostream>
using namespace std;

// int add(int a, int b)
// {
//     cout << "add function\n";
//     return a + b;
// }

// template <typename T>
// T add(T a, T b)
// {
//     cout << "add function template\n";
//     return a + b;
// }

// int main()
// {
//     int a = 10, b = 20;
//     add<>(a, b);
//     return 0;
// }

long multiply(int i, int j)
{
    cout << "    function\n";
    return i * j;
}

template <class T>
typename T::multiplication_result multiply(T t1, T t2)
{
    cout << "  template\n";
    return t1 * t2;
}
int main(void)
{
    cout << multiply<int>(4, 5);
}