// Write a program to print a piramid on the screen


#include<stdio.h>

 int main()
 {
     int a,b,c=11;
     for(a=1;a<=c;a++)
     {
         for(b=0;b<=2*c-1;b++)
         {
             if(b<=c+(a-1)&&b>=c-(a-1))
                printf("*");
             else
                printf(" ");
         } sleep(1);
         printf("\n");
     }
     printf("\t   ||\n\t   ||\n\t   ||");
 }
