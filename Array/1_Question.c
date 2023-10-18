// Write a program to print the following numbers in the reverse order:
// 34 56 54 32 67 89 90 32 21
// Assume ghat all these all numbers are stored in an array.

#include<stdio.h>
int main()
{
    int l,a[9]={34,56,54,32,67,89,90,32,21};
    for(l=8;l>=0;l--)
        printf("%d ",a[l]);
    return 0;
}
