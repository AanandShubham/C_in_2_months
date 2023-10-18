#include<stdio.h>
#define N 2
#define M 3
/*
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    //int *p;
    for(int l=0;l<6;l++)
    {         printf("%d ",*(*(a)+l));

        // if(p==&a[0][2])
          //          printf("\n");
    }
}
*/

// Write a program to assign value to a 2D array using pointer

int main()
{
    int a[N][M];//={1,2,3,4,5,6};
    int *p;
    for(p=&a[0][0];p<&a[N-1][M];p++)
    {
        printf(" enter the 6 digit array element: ");
           scanf("%d",p);
    }
    for(p=a;p<&a[N-1][M];p++)
    {
        printf("%d ",*p);
        if(p==&a[0][2])
            printf("\n");
          // scanf("%d",p);

    }
    return 0;
}

