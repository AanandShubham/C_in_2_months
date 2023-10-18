#include<stdio.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    int x;
    struct student var ={"ram",24};
    struct student *p=&var;
    for(x=0;p->name[x]!='\0';x++)
    {
        printf("%c",p->name[x]);
        Sleep(500);
    }
getch();
}
