#include<stdio.h>

struct student
{
    char name[23];
    int age;
};
int main()
{
    struct student var={"anand",21};
    struct student *p=&var;
    //free(p);
    printf("name = %s \nage = %d",p->name,p->age);

}


















