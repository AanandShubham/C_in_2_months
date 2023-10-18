// Write a program to cheak wheather a number is prime or not

/* Prime Number :- All numbers greater than 1 is called a prime number if it has only devisible by 1 and itself
Ex:-2,3,5,7,11 .............etc */

#include<stdio.h>

 int main()
{
 int x,i,val1,val2,count=0;

   printf("enter a number: ");
      scanf("%d",&x);

   val1=ceil(sqrt(x));
   val2=x;
   for(i=2;i<=val1;i++)
   {
       if(val2%i==0)
        count=1;

   }
   if((count==0&&val2!=1)||val2==2||val2==3)
        printf("\nNumber is prime");
   else
        printf("\nNumber is not prime") ;
}

/*

// Mol

int main()
{
    int num,a=1,cheak=0;
    printf("enter a number : ");
    scanf("%d",&num);
    int n=num+1;
    while(a<=num)
    {
        if(num%a==0)
            cheak=cheak+a;
        a++;
    }

    if(cheak==n)
         printf("Number is prime");
    else
         printf("Not prime number");

    return 0;

}
*/
