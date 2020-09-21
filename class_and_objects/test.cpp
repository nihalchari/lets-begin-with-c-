#include <stdio.h>

struct str
{
    int id;
    char name[20];
};

void acceptRecords(str *s)
{
    printf("Enter name :    ");
    scanf("%[^\n]s", s->name);
    printf("Enter id :  ");
    scanf("%d", &s->id);
}

void printRecords(str *s)
{
    printf("Name    : %s\n", s->name);
    printf("Id      : %d\n", s->id);
}

int main()
{
    str s;
    acceptRecords(&s);
    printRecords(&s);
    return 0;
}