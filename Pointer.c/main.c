#include <stdio.h>
#include <stdlib.h>

//int main()
/*
{
   int *a,b=5,*c,d=6;

   a=&b;
   c=&d;
   *a=d;

   printf("%d ",b);
   printf("%d",d);
    return 0;
}
*/
/*
{
    int i[4]={1,2,3,4};
    int *p=&i[0];
   // int *q;
   // q=p;
    //*q=5;
    printf("%d %d ",*(p++),*p);
}
*/

/*
// write a program to assign value to an array using pointer ;

int main()
{
int a[4];
int *p;
p=&a[0];
int l=0;
/*
for(p=&a[0];p<&a[4];p++)
{
    printf("enter the %d element of array :  ",++l);
         scanf("%d",p);
         //l++;
}
*/
/*
for(l=0;l<4;l++)
{
    printf("enter the %d element of array :  ",l+1);
         scanf("%d",p);
         p++;
}
p=&a[0];
for(l=0;l<4;l++)
{
    printf("element of array is =%d   \n",*p);
    p++;
}
}

*/


int main()
{
    char n[8];//="mango";
    char *p=&"ram";
    strcpy(n,"mango");
    puts(p);
    puts(n);
}



















