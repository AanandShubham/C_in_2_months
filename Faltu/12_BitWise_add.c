// Write a program to add two numbers without using (+) operator

                 //################ this program is made with the concept of half adder  ################\\

//*********** Agar aapko nahi pata ki half adder concept kya hai to phle pata karo fir code dekhioooooooooo lol kahi k ***********\\





#include<stdio.h>
//#include<>
int main()
{
    int a,b,sum,carry;
    printf("Enter two Number: ");
       scanf("%d,%d",&a,&b);

     while(b!=0)
     {
          sum=a^b;
          carry=(a&b)<<1;
          a=sum;
          b=carry;
     }
   printf("sum of two no= %d",sum);

   return 0;

}








































 /*  $ Half adder is basically a combinational circuit which takes 2 bits at a time and produces two bits at the same time

                     here one bit is considerd as a sum bit  and the other bit is considerd as carry bit

  the truth table is given below :-

  a     b    sum_bit   carry_bit

  0    0       0            0
  0    1       1            0
  1    0       1            0
  1    1       0            1


    here sum bit works as Bitwise XOR and carry bit works as Bitwise AND



*/




























