#include<stdio.h>
/*
void fun(int n)
{
  if(n==0)
        return;
   fun(n-1);
    printf("%d ",n);
}
int main()
{
    fun(3);
    return 0;

}
*/
// Second trice
void fun(int n)
{
  if(n==0)
        return;
   else
    {
       fun(n-1);
       return printf("%d ",n);
    }

}
int main()
{
    fun(3);
    return 0;

}

