#include <stdio.h>

int add(int n1, int n2)
{
    return n1 + n2;
}
int sub(int n1, int n2)
{
    return n1 - n2;
}

int main()
{
    int (*fp)(int, int) = NULL;

    int choice = 1;

    while (choice)
    {
        printf("Enter Choice\n");
        printf("1. Add\n2. Sub\n0.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            fp = add;
            break;
        case 2:
            fp = sub;
            break;
        }
        if (fp != NULL)
        {
            int res = 0, n1, n2;
            printf("Enter n1 n2\n");
            scanf("%d%d", &n1, &n2);
            res = fp(n1, n2);

            printf("res =%d\n", res);
        }
    }
    return 0;
}
