// Write a program to cheak whether any of the digits in a number appears than once:
// Examples:
// inputed: 62586
// output: Yes
#include<stdio.h>
/*
int main()
{
    int a[10]={0};
    int num,cheak;

      printf("enter the number: ");
         scanf("%d",&num);
      while(num!=0)
      {
          cheak=num%10;
        if(a[cheak]==0)
        {
            a[cheak]=1;
        }
        else{
                cheak=0;
            break;
        }
        num=num/10;
      }
      if(a[cheak]!=1)
        printf("yes repeted");
      else
         printf("No Not repeted");

      return 0;

} */
// Hurre made it again
int main()
{
    int a[10]={0},num,cheak;
    printf("enter a number: ");
       scanf("%d",&num);
       while(num>0)
       {
           cheak=num%10;
           if(a[cheak]==1)
            break;
           a[cheak]=1;
           num=num/10;

       }
     if(num>0)
        printf("yes repeted");
     else
     printf("No NOt repeted");



    return 0;
}
