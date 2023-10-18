// Write a program that reads a 5x5 matrix of type int and then prints the row sum and column sum :
//

#include<stdio.h>
int main()
{
    int num[5][5],srow[5]={0},scol=0;
    int z,y;
    printf("Enter the 5x5 matrix:  \n");
    for(z=0;z<5;z++)
    {
        for(y=0;y<5;y++)
        {
            scanf("%2d",&num[z][y]);
        }
        //printf("\n");
    }
    printf("matrix********************************\n");
      for(z=0;z<5;z++)
    {
        for(y=0;y<5;y++)
        {
            printf("%2d ",num[z][y]);
        }
        printf("\n");
     }
     printf("sum***********************\n");
     for(z=0;z<5;z++)
    {
        for(y=0;y<5;y++)
        {
            srow[z]=srow[z]+num[z][y];
            scol=scol+num[y][z];

        }
         printf("%2d ",srow[z]);
         printf("%2d\n ",scol);
         scol=0;
         //srow=0;
       // printf("\n");
    }
}

/*
int main()
{
    int a=1,b,c;
    for(b=5,c=0;b>c;b--,c++)
    {
        printf("%d %d |",b,c);
    }
}
*/
