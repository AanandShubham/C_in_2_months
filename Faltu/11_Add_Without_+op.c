// Write a program to add two numbers without using (+) operater

#include<stdio.h>

  int main()
  {
      int a,b;

       printf("Enter two numbers:");
         scanf("%d %d",&a,&b);
       if(a<0)
       {
           while(a!=0)
           {
               b--;
               a++;
           }
          printf("value = %d ",b);
       }
      else if(b<0)
       {
           while(b!=0)
           {
               a--;
               b++;
           }
          printf("value = %d ",a);
       }
     else
     {
         while(b!=0)
          {
               a++;
               b--;
          }
        printf("value = %d ",a);
     }

     return 0;
  }
