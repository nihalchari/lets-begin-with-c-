#include <stdio.h>

void fun()
{
    int autoVar = 0;
    static int localStatic = 0;
    ++autoVar;
    ++localStatic;
    return;
}

int global = 10;
static int globalStatic = 100;

int main()
{
    printf("global  :%d   \n", global);
    printf("globalStatic  :%d   \n", globalStatic);
    fun();
    fun();
    return 0;
}
