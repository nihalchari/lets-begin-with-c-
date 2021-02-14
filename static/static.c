#include <stdio.h>

void fun(void);
static int count = 3;
int a = 1;

int main()
{

    fun();
    fun();
    fun();
}

void fun(void)
{
    int x = 0;
    static int count = 1;
    printf("%d\n", count);
    ++count;
}
