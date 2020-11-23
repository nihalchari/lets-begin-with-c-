#include<cstdlib>
#include<iostream>
using namespace std;


int main()
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