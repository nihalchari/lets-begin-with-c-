#include <stdio.h>

class str
{
    public:
    //data members
    int id;
    char name[20];

    //member functions
    void getData()
    {
        printf("id : %d\n", id);
        printf("name :%s \n", name);
    }

    //this *
    void setData()
    {
        printf("Enter name\n");
        scanf("%[^\n]s", this->name);
        printf("enter id\n");
        scanf("%d", this->id);
    }

};

int main()
{
    //object or instance
    str s;
    str s1;
    printf("%ld\n",sizeof(s));
    s.setData();
    s1.setData();
    s.getData();

    
}

