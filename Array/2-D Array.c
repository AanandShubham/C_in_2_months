#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[2][2]={1,2,3,4};int *p=*a;
    //printf("%d",*(*a+1)+2);
    printf(" %d ",*p+5);

  /* for(int b=0;b<=3;b++)
    {
        for(int c=0;c<=2;c++)
        {
            printf("%d ",a[b][c]);
        }
      printf("\n");
    }*/
   return 0;
}
