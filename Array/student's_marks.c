// Write a program to input the marks of 10 student and add 25 in the marks of that student who's marks is under 250;

#include<stdio.h>
#define LEN 10
int main()
{    int a;
    int n_of_st[a],marks[LEN];
    int n;
    for(n=0;n<LEN;n++)
    {
        printf("enter the marks of %d  student ",n+1);
         scanf("%d",&marks[n]);
    }
  printf("******************************\nResult\n*****************************\n");
 for(n=0;n<LEN;n++)
    {
         if(marks[n]<250)
             marks[n]+=25;
        printf("marks of %d  student is %d\n",n+1,marks[n]);
       //  scanf("%d",&marks[n]);
    }

    return 0;
}

