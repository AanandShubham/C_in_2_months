#include<stdio.h>

int main()
{
   int lip;

     printf("enter year:");
       scanf("%d",&lip);
       if(lip%400==0 || (lip%4==0) &&(lip%100!=0))
       {
           printf("yes it is leap year");

       }
       else
         printf("not leap year");
    return 0;
}
