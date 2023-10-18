#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={1,2,3,4,5,6,7,8,9},c[3][3],x,y,z,sum=0;
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            for(z=0;z<3;z++)
            {
                sum+=a[x][z]*b[z][y];
            }
            c[x][y]=sum;
            sum=0;
        }
    }
     for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
           // for(z=0;z<3;z++)
            //{
               printf("%5d ",c[x][y]);
           // }
            //c[x][y]=sum;
        }
        printf("\n");
    }
}

/*
int main()
{
    int a;//b[a];
    printf("enter the size of array: ");
    scanf("%d",&a);
   // int b[a];
    for(int c=0;c<a;c++)
    {
        scanf("%d",&b[c]);

    }
     for(int c=0 ;c<a;c++)
    {
        printf("%d  ",b[c]);

    }
}
*/
