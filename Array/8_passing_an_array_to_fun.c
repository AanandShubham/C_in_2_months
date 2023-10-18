// Write a program to pass an array to a function and find the sum of that array elements

#include<stdio.h>

int add(int b[],int len);
int main()
{
    int a[]={1,2,3,4,5};
    int len=sizeof(a)/sizeof(a[0]);
    printf("sum of whole array is=%d ",add(a,len));
    return 0;

}
int add(int b[],int len)
{
    int sum=0;
    for(int l=0;l<len;l++)
       sum+=b[l];
       return sum;
}

/*
// Write a program to pass an array to a function and find the sum of that array elements using pointer
int add(int *p,int len);
int main()
{
    int a[]={1,2,3,4,5,6};
    int len=sizeof(a)/sizeof(a[0]);
    printf("Sum of array = %d ",add(a,len));

  return 0;
}
int add(int *p,int len)
{
    int sum=0;
    for(int l=0;l<len;l++){
        sum+=*p;
        p++;
    }
    return sum;
}
*/
/*
// Write a program to assign elements to an array from another function using pointer
#define N 5
void write(int *p);
int main()
{
    int a[N];
    write(a);
    for(int an=0;an<N;an++)
        printf("%d ",a[an]);
    return 0;
}
void write(int *p)
{
    for(int l=0;l<N;l++)
    {
        printf("enter the %d element : ",l+1);
           scanf("%d",p);
          p++;
    }
}
*/
