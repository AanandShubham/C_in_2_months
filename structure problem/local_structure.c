// write a program to create a local structure

#include<stdio.h>
char *manager()
{
    struct  {
    char *name;
    int age;
    }manager;
    manager.name="lolaram";
    manager.age=23;
    return manager.name;

}
int main()
{
    printf("%s ",manager());
   // manager.age=23;
   // printf("%d ",manager.age);

}
