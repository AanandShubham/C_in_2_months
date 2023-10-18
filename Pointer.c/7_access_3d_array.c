// Write a program to access the elements of a 3-D array using its name as pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[2][2][2]={1,2,3,4,5,6,7,8};
  int *p=a;
    printf("%d ",*(**a)+6);// Using array name as pointer
    printf(" %d",**(*(a+1)+1));// using pointer
  return 0;
}
