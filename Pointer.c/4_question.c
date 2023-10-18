// What is the output of the following program

#include<stdio.h>
int main()
{
    int a[]={5,16,7,89,45,32,23,10};
    int *p=&a[1];int *q=a[5];

    printf("%d ",*(p+3));
    printf("%d ",*(q-3));
    printf("%d ",q-p);
    printf("%d ",p<q);
    printf("%d ",*p<*q);
 return 0;
}

/*
Options:

    a> 45 7 4 1 1
    b> 45 4 7 1 1
    c> 44 7 4 1 0
    d> 45 7 4 0 1

*/
