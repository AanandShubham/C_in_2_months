// write a program to cheak the number is leap year or not

#include<stdio.h>

 int main()
 {
   int year;
   printf("Enter the year: ");
      scanf("%d",&year);
    if(year%400==0)
        printf("year is leap year");
    else if(year%100==0)
        printf("Not leap year");
    else if(year%4==0)
        printf("year is leap year");
    else
        printf("Not leap year");
    return 0;
 }

