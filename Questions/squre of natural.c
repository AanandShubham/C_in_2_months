#include<stdio.h>
//#include<>
  int main()
{
   int a,b,c,temp ;

  printf("1^1\t1^2\t1^3\t1^4\n");
  printf("*******************************\n");
    for(a=1;a<=10;a++)
    { temp=1;
      for(b=1;b<5;b++)
        {
         // for(c=0;c<b;c++)
          //{

              //temp=1;
              temp=temp*a;
              printf("%2d\t",temp);

            //}
           // printf("%d",temp);
             // printf("\n");
        }
        printf("\n");
      printf("*******************************\n");
    }


}

/*
   int main()
   {

       for(int a=1; a<=4; a++)
       {

           //textcolor(128);
            printf("------------------------------\n");
            printf("%d^1\t%d^2\t%d^3\t%d^4\n",a,a,a,a);
             printf("------------------------------\n");
           printf("%d\t",a);
           printf("%d\t",a*a);
           printf("%d\t",a*a*a);
           printf("%d\t",a*a*a*a);
           printf("\n");


       }





   }

*/







































