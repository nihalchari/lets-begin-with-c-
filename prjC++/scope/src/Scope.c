#include "stdio.h"

///@note programm scope
int i = 10;

///@note file scope
static int s_i = 20;

int main()
{
    // printf("i = %d\n", i);

    ///@note function scope
    int i = 30;

    {
        ///@note block scope
        int i = 40;
        printf("i = %d\n", i);
    }

    printf("i = %d\n", i);

    return 0;
}