// Which one of the choices given below would be printed when the following program is executed ?
/*
-------------------
 a>   a=0,b=3
      a=0,b=3
-------------------
 b>   a=3,b=0
      a=12,b=9
-------------------
 c>   a=3,b=6
      a=3,b=6
-------------------
 d>   a=6,b=3
      a=15,b=12
-------------------
*/

#include<stdio.h>

void swap(int *x,int *y)
{
    static int *temp;
    temp=x;
    x=y;
    y=temp;

}
void printab()
{
    static int i,a=-3,b=-6;
    i=0;
    while(i<=4)
    {
        if((i++)%2==1) continue;
        a=a+i;
        b=b+i;

    }
    swap(&a,&b);
    printf("a=%2d b=%2d \n",a,b);
}
int main()
{
    printab(); sleep(1);
    printab();
}
