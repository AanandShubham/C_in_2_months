// write program to take input of an array element through function

#include<stdio.h>

void print(int a[][3],int m,int n);
int main()
{
    int a[3][3];
    print(a,3,3);
     int *p;
     for(p=&a[0][0];p<=*a+8;p++)
        printf("%d ",*p);
}
void print(int a[][3],int m,int n)
{  int *pt;
    printf("enter the %d elements \n ",(m*n));
    for(pt=&a[0][0];pt<&a[2][3];pt++)
    scanf("%d",pt);

}
*/

/*
// second trik
//--------------------------------------
void print(int a[][3],int m,int n);
int main()
{
    int a[3][3];
    print(a,3,3);
     int *p;
     for(p=*a;p<=*a+8;p++)
        printf("%d ",*p);
}
void print(int a[][3],int m,int n)
{  int *pt;
    printf("enter the %d elements \n ",(m*n));
   for(pt=*a;pt<=*a+8;pt++)
    scanf("%d",pt);

}
*/
