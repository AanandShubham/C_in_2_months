// Write a program to make a calculator using function pointers

#include<stdio.h>
#include<string.h>
/*
int sum(int,int);
int sub(int,int);
int main()
{
  int (*p[2])(int,int)={sum,sub};
    printf(" sum = %d",p[0](4,5));
}
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
*/


void add()
{
    int a,b;
    printf("enter two no : ");
    scanf("%d %d",&a,&b);
    printf("sum = %d",a+b);

}
void sub()
{
    int a,b;
    printf("enter two no : ");
    scanf("%d %d",&a,&b);
    printf("sub = %d",a-b);

}
int main()
{   int a;
    void (*p[2])()={add,sub};
    system("cls");
    printf("enter 0 or 1 : ");
      scanf("%d",&a);
    p[a]();

}

