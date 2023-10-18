#include<stdio.h>
/*
int main()
{
    char arr[2][10];
    char *p;
    p=&arr[0];
    printf("enter the 1 item: ");
      scanf("%s",&*p);
      p++;

      printf("name =%s ",arr[0]);

printf("enter the 2 item: ");
      scanf("%s",&*p);
      printf("name =%s ",arr[1]);
}
*/
// What is the output of the following c code?. Assume that the address of x is 2000 (in decimal) and an integer requires four bytes of memory

int main()
{
    int y[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
   // int *p,*q;
   // p=&a[0]; q=&a[3];
   // printf("%u %u %u ",x+3,*(x+3),*(x+2)+3);
   for(int x=0;x<7;x++)
    printf("%d ",*(*(y)+x));
    return 0;
}
