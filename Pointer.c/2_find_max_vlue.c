// **** Application of pointer No 1:- Accessing the elements content from another function

// Write a program to find the maximum and minimum elements of an array using function and pointer ;

#include<stdio.h>
#include<stdlib.h>
void find(int ar[],int l,int *max,int *min);
int main()
{
    int a[]={1,2,3,4,45,5,6,0,11,-2},min,max,len;
    len=sizeof(a)/sizeof(a[0]);
    //printf("%d",len);
    find(a,len,&max,&min); sleep(1);
    printf("maxximum=%d and minimum=%d ",max,min);

    return 0;
}
void find(int ar[],int l,int *max,int *min)
{
    int a;
    *min=*max=ar[0];
    for(a=1;a<l;a++)
    {
        if(ar[a]<*min)
            *min=ar[a];
        else if(ar[a]>*max)
            *max=ar[a];

    }
}
