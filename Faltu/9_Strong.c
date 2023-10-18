// Write a program to cheak the number is strong or not
/* Strong Number:- it is a number in which the sum factorial of indivisual digits of a number is equal to the original number
    @-Factorial :- factorial of a positive integer n is the number which is obtained by multiplying all positive integers less than or equal to n

    @- Ex- Factorial of 5 => 5*4*3*2*1 = 125

  Ex- 145 = 1+(4*3*2*1)+(5*4*3*2*1)=145 ==145 number is strong

  Ex- 123 = 1+(2*1)+(3*2*1) = 9!=123 number is not strong */

#include<stdio.h>

 int main()
 {
     int num,n,cheak=0,mul=1,rev;

       printf("enter a num : ");
         scanf("%d",&num);

        n=num;
        while(num!=0)
        {
            rev=num%10;
             while(rev!=0)
             {
                 mul=mul*rev;
                 rev--;
                // printf("mul=%d  ",mul);

             }
           cheak=cheak+mul;
           mul=1;
           num=num/10;
        }
        //printf("%d",cheak);
       if(n==cheak)
            printf("Strong No!");
       else
            printf("Not A strong no!");
       return 0;
 }
