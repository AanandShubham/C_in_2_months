// Write a program to calculate the sum of elements of array using pointers

#include<stdio.h>
/*
int main()
{
    int a[]={1,2,3,4,5,6},sum=0;
    int *p=&a[0];
    int len=sizeof(a)/sizeof(a[0]);
    for(int x=0;x<len;x++)
    {
        sum+=*p;
        p++;
    }
    printf("sum=%d ",sum);
}
*/
/*
// second method
int main()
{
    int a[]={1,2,3,4,5,6};
    int sum=0,*p;
    for(p=&a[0];p<=&a[5];p++)
    {
        sum+=*p;

    }
    printf("sum=%d",sum);
  return 0;
}
*/
/*

// Third method

int main()
{
    int a[]={1,2,3,4,5};
    int sum=0;
    for(int x=0;x<5;x++) {
        sum+=*(a+x);
       // *(a++);
    }
    printf("sum=%d ",sum);
}
*/
/*
// Fourth method
int main()
{
    int a[]={1,2,3,4,5};
    int sum=0,*p;
    for(p=a;p<a+5;p++)
        sum+=*p;
    printf("sum= %d ",sum);
}
*/



















