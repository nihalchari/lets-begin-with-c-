#include <stdio.h>

int testFun(const int num1, int num2)
{
    // ++num1;
    ++num2;
    return num2;
}

int main()
{

    const int num = 10;
    // num = 10;
    printf("%d\n", num);

    return 0;
}