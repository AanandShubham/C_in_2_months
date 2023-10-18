
#include<stdio.h>

   int main()
   {
       int a,b,c;

        printf("Enter two:");
          scanf("%d,%d",&a,&b);
       for(c=(a>b?a:b);c>=0;c--)
       {
           if(a%c==0&&b%c==0){
              printf("H.C.f = %d",c);
                break;
                }
       }
     return 0;
   }
