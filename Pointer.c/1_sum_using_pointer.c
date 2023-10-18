// Write a program to add two number through pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=5,b=3,c,*p;
   // p=&c;
   // c=a+b;
    *p=a+b;
    printf("%d ",*p);
    return 0;
}


