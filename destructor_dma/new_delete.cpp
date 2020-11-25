#include<cstdlib>
#include<iostream>
using namespace std;


int main()
{
    int *ptr = new int[5];

    if(NULL == ptr)
    {
        cout << "memory not available\n";
    }

    // *ptr = 1010;
    // cout << *ptr << endl;

    delete[] ptr;
    ptr =nullptr;
    return 0;
}


int main2()
{
    int *ptr = new int{1020};

    if(NULL == ptr)
    {
        cout << "memory not available\n";
    }

    *ptr = 1010;
    cout << *ptr << endl;

    delete ptr;
    ptr =nullptr;
    return 0;
}



int main1()
{
    int * ptr = (int *)malloc(sizeof(int));
    if(NULL == ptr)
    {
        cout << "memory not available\n";
    }

    *ptr = 100;
    cout << *ptr << endl;
    free(ptr);
    ptr=NULL;   
    return 0;
}