//  write a program to print fibonancci series upto n number of terms
/* ******* The term fabonancci comes from the name of an Italial mathematician " Leonardo of pisa " known as fibonacci *******

    In fibonacci series next term is obtained by taking sum of previous terms

        n: 0   1    2   3   4   5   6   7
------------------------------------------
fibonacci: 0   1    1   2   3   5   8   13

*/

#include<stdio.h>

 int main()
 {
     int a=0,b=1,no,sum,l;

     printf("Enter the n term: ");
       scanf("%d",&no);
   printf("\nfabonacci till %d is = ",no);
     for(l=0;l<=no;l++)
     {
         printf("%d ",a);

         sum=a+b;
         a=b;
         b=sum;

      }  printf("\n\n");
     return 0;
 }

