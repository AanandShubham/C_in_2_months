// Write a program to add two matrix and store it in a third matrix and print them also
//
//
//
#include<stdio.h>
 int main()
{
    int a[2][3]={1,2,3,4,5,6},b[3][2]={7,8,9,10,11,12},c[2][3];
    int y,z;
    for(y=0;y<2;y++)
    {
        for(z=0;z<3;z++)
        {
            c[y][z]=a[y][z]+b[z][y];

            printf("%d ",c[y][z]);
        }
    }

  /*  for(y=0;y<2;y++)
    {
        for(z=0;z<3;z++)
        {
            printf("%d ",c[y][z]);
        }
    }*/
}
