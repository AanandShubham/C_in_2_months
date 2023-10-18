// write a program to find the power of any number while number and power inputed through keyboard


#include<stdio.h>

 int main()
 {
     int no,power,p,result=1 ; double result2=1.00;

     printf("enter the number and it's power: ");
        scanf("%d %d",&no,&power);
      p=power;
      if(power>0)
      {

        while(power--)
          {
            result= result*no;

          }

          printf("Power %d of %d is %d",p,no,result);
      }
      else
      {
          while(power++)
            {
                result2=result2*(1.00/no);
            }
          printf("power %d of %d is %.5f",p,no,result2);

      }
  return 0;
 }
