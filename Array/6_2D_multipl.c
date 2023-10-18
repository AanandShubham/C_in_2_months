#include<stdio.h>
int main()
{
   int a[2][2]={1,2,3,4},b[2][2]={1,2,3,4},c[2][2],x,y,z,sum=0;
   for(x=0;x<2;x++)
   {
     for(y=0;y<2;y++)
     {
       for(z=0;z<2;z++)
       {
         sum+=a[x][z]*b[z][y];
       }
       c[x][y]=sum;
       sum=0;
     }
   }
   for(x=0;x<2;x++)
   {
    for(y=0;y<2;y++)
    {
        printf("%d ",c[x][y]);

    }
    printf("\n");
   }

}



