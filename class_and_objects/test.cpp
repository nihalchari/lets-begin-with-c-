#include <stdio.h>

class str
{
    public:
    int id;
    char name[20];

    void getData()
    {
        printf("id : %d\n", id);
        printf("name :%s \n", name);
    }

    void setData()
    {
        printf("Enter name\n");
        scanf("%[^\n]s", this->name);
        printf("enter id\n");
        scanf("%d", &this->id);
    }

};

int main()
{
    str s;
    s.setData();
    s.getData();

    
}

