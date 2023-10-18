#include<stdio.h>
struct employee{
char *name;
int age;
int salary;
};

int manager()
{
    struct employee manager;
    manager.salary=467777;
    return manager.salary;
}
int main()
{
    struct employee emp1;
    struct employee emp2;
    //struct employee emp1,emp2;  // this is equal to both of above lol

   printf("enter the salary or employee 1: ");
     scanf("%d",&emp1.salary);
   printf("enter the salary or employee 2: ");
     scanf("%d",&emp2.salary);
   printf("salary of first employee is %d\n",emp1.salary);
   printf("salary of second employee is %d\n",emp2.salary);
   printf("salary of manager is %d",manager());
getch();
   return 0;
}
