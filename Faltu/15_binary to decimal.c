// write a program to convert Binary number to decimal number


#include<stdio.h>

  int main()
 {
   int no,rev,carry=1,decimal=0;

   printf("enter a binary no :  ");
     scanf("%d",&no);
     while(no!=0)
     {

       rev=no%10;
       decimal=decimal+(carry*rev);
       no=no/10;
       carry=carry*2;
     }
      printf("value = %d",decimal);

    return 0;
 }

