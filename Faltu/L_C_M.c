#include<stdio.h>

   int main()
   {
       int a,b,c;

        printf("Enter two:");
          scanf("%d,%d",&a,&b);
       for(c=(a>b?a:b);c<=a*b;c++)
       {
           if(c%a==0&&c%b==0){
              printf("L.C.M=%d",c);
                break;
                }
       }
     return 0;
   }
