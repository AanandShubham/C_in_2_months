// Write a program which uses pointer to entire array

#include<stdio.h>
/*
int main()
{
    int a[][3]={1,2,3,4,5,6};
    int (*p)[3]=a;
    //for(int x=0;x<5;x++)
    printf("%d %d",(*p)[1],(*p)[2]);
    ++p;
    printf(" %d %d",(*p)[1],(*p)[2]);
}
*/

int main()
{
    int a[][3]={1,2,3,4,5,6};
    int *p;
    for(p=a;p<&a[1][3];p++)
        printf("%d ",*p);
}
