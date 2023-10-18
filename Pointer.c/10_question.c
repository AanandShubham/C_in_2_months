// A C program is given below:

// What should be the contents of the array b at the end of the program ?
/*
----------------------------------------------------------------
a> a,b,c,d,e,f  b> a,d,b,e,c,f  c> a,d,e,b,d,f  d> a,e,d,c,b,f
----------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[2][3]={{'a','b','c'},{'d','e','f'}};
    int b[3][2];
    int *p=*b;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++){
            *(p+2*j+i)=a[i][j];
        }

    }
    for(i=0;i<6;i++)
    printf("%c ",**b+i);

}
