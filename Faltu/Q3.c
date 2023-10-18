// This program is made to cheak the feature of (Continue) keyword

#include<stdio.h>

   int main()
   {
       int a=-5;

       while(a<=5)
       {
           if(a>=0)
              break;
           else
            {
                a++;
                 continue;

            }
            printf("Anand");
       }
       printf("%d",sizeof(unsigned int));


       return 0;

   }
