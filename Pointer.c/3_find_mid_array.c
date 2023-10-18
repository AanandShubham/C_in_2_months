//**** Application of pointers no 2:- Returning pointer ****

// Write a program to find the mid value of an array using pointer

#include<stdio.h>
#include<stdlib.h>

int *findMid(int a[],int l);
int main()
{
    int a[]={1,3,4,5,6};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    int *p=findMid(a,n);
    printf("mid of array= %d ",*p);
    return 0;
}
int *findMid(int a[],int l)
{
    return &(a[l/2]);
}

/*
// it is illegle in c that you cannot return the address of a local variable( automatic variable )  ;
int *fun()
{
    int u=10;
    return &u;

}
int main()
{
    int *p;
    p=fun();
        printf("%d ",*p);
}
*/
