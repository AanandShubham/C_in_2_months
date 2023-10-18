// Write a program to cheak the number is armstrong or not

/* Armstrong :- An armstrong number of order n is a number in which each digit when multiplied by itself n number of times and finally added together results
 the same number where the n is number of digit

 Ex- 153:-(1*1*1)+(5*5*5)+(3*3*3)=153 its a armstrong number
 Ex- 123:-(1*1*1)+(2*2*2)+(3*3*3)=36 its not a armstrong number
 */




#include<stdio.h>
//#include<conio.h>

  int main()
  {
      int num,digit,rev,n,mul=1,count=0,arm=0;

      printf("Enter a number: ");
        scanf("%d",&num);
        n=num;
       while(num!=0)
       {
           num=num/10;
           count++;
       }
       num=n;
       digit=count;

       while(num!=0)
       {
           rev=num%10;
             while(digit!=0)
             {
                 mul=mul*rev;
                 digit--;
             }
             arm=arm+mul;
             num=num/10;
             digit=count;
             mul=1;

       }
        if(n==arm)
            printf("Number is Armstrong");
        else
            printf("Not Armstrong");

      printf("\nno=%d ,%d",n,arm);

  return 0;
  }



















