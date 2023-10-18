// Program to Inisialize the one dimensnal Array

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[6]={121,234,33,455,233,344};
        //  a[5]++;
       int (*p)[6]=a;
       //for (int b=0;b<5;b++)
         // {

             printf("%d ",(*p)[5]);
          //}

    return 0;
}

/*
// Taking input  through the user in One dimansnal array

int main()
{
    int a[5];

       for(int b=0;b<=5;b++)
         {
            scanf("%d",&a[b]);
         }
            printf("\n");
        for( int b=0;b<=5;b++)
        {
            printf("%d ",a[b]);
        }

    return 0;

} */




































