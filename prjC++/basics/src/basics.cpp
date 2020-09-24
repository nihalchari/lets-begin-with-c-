#include<iostream>
#include "inline.h"

#define  M_SQUARE(x) (x) * (x)

int main(void)
{
    int a=5, b=5;
    auto res = M_SQUARE(++a);
    std::cout << "M_SQUARE : " << res << std::endl;
    std::cout << "SQUARE : " << SQUARE(++b) << std::endl;
    return 0;
}


