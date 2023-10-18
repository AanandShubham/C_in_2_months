// This program is made to cheak the short circuit of "(OR)"  operator
#include<stdio.h>

   int main()
   {
      int a=5,b=3,incr;

incr=a>b || b++;

printf("%d %d,%d",a,b,incr);







       return 0;
   }
