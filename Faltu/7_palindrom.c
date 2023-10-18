// Write a program to cheak the number is palindrom or not , if the number is inputed through the keyboard

// Palindrom= Ulta sidha ek saman : 121,323,444,767 etc

#include<stdio.h>
int main()
{
    int a,b,no,num;
    printf("enter any no:");
      scanf("%d",&no);
      num=no;
      while(no!=0)
      {
         a=no%10;
         b=b*10+a;
         no=no/10;

      }

     if(num==b)
            printf("Number is palindrom");
     else
         printf("Number is not palindrom");

     return 0;

}


