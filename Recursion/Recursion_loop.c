#include<stdio.h>

int v=12;
int fun(int,int);
int main()
{
 int a=1;
 fun(v,a);
    return 0;
}
int fun(int a,int n)
{
    if(n==10)
        return;
    else
    {
       printf("%*d ",n,a);
       printf("\n");

      return fun(a+1,n+2);
    }

}


/* write a Recursive function to print  *****
                                        *****
                                        *****

*/
/*
void fun(int );
void fun2(int );

 int main()
 {
     fun(3);
     return 0;

 }
 void fun(int n)
 {
     if(n==0)
        return;
     else
     {
         fun2(5);
         printf("\n");
        return fun(n-1);

     }
 }
 void fun2(int a)
 {
     if(a==0)
        return;
     else
     {
         printf("*");
         return fun2(a-1);

     }
 }
*/
