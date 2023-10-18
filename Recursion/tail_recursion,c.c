// This is an example of "Tail Recursion"
#include<stdio.h>

void fun(int n)
{
  if(n==0)
        return;
    printf("%d ",n);
   fun(n-1);
}
int main()
{
    fun(3);
    return 0;

}

// Second trice
/*
void fun(int n)
{
  if(n==0)
        return;
    printf("%d ",n);
   fun(n-1);
}
int main()
{
    fun(3);
    return 0;

}
*/
