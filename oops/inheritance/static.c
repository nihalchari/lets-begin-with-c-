#include <stdio.h>

void fun()
{
    static int localStatic = 0;
    int autoVar = 0;
    ++autoVar;
    {
        static x;
    }
    ++localStatic;
    return;
}

int global = 10;
static int globalStatic = 100;
int glo;

//__start()
//.data initialized global and static
//.bss  uintialized global n static    =0;
// intialization stack

int main()
{
    printf("global  :%d   \n", global);
    printf("globalStatic  :%d   \n", globalStatic);
    fun();
    fun();
    return 0;
}
