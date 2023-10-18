// write a program to take the input of two matrix and multiply them

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arow,acolom,brow,bcolom,x,y,z,sum=0;
    printf("Enter the size of matrix A: ");
        scanf("%d %d",&arow,&acolom);
   printf("Enter the size of matrix B:  ");
        scanf("%d %d",&brow,&bcolom);
     if(acolom!=brow)
     {
         printf("this matrix can't multiply:");
         exit(0);
     }
     else {

   int a[arow][acolom],b[brow][bcolom],c[arow][bcolom];
   printf("Enter the elements of matrix A:  \n");
   for(x=0;x<arow;x++)
   {
       for(y=0;y<acolom;y++)
       {
           scanf("%d",&a[x][y]);
       }
   }
   printf("Enter the elements of matrix B:  \n");
     for(x=0;x<brow;x++)
   {
       for(y=0;y<bcolom;y++)
       {
           scanf("%d",&b[x][y]);
       }
   }
   for(x=0;x<arow;x++)
   {
       for(y=0;y<bcolom;y++)
       {
           for(z=0;z<brow;z++)
           {
               sum+=a[x][z]*b[z][y];
           }
           c[x][y]=sum;
           sum=0;
       }
   }
   printf("Matrix after multiple: \n");
  for(x=0;x<arow;x++)
   {
       for(y=0;y<bcolom;y++)
       {
           printf("%2d ",c[x][y]);
       }
       printf("\n");
   }
 }
 return 0;
}
