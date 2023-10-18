// write a program to cheak the number is perfect or not ?

/* Perfect Number :- It is a positive integer that is equal to the all proper positive divisiors excluding the number itself

  Ex:- 6 is a perfect number becouse the positive divisiors of 6 are 1,2,and 3 excluding 6
        and the sum of all its positive divisiors is  (1+2+3=6) is 6 as the sum is equal to our actual number so it's a perfect number
*/
#include<stdio.h>

 int main()
 {
     int num,sum=0,a=1;

     printf("enter the no.: ");
       scanf("%d",&num);
     while(a<num)
     {
         if(num%a==0)
            sum=sum+a;
            a++;
     }
    if(sum==num)
        printf("%d is a perfect number",sum);
    else
        printf("%d is not a perfect number");
    return 0;
 }
