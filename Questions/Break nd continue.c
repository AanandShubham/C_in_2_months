#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            //break;//output will be 1 2 3 4

            continue; //output will be 1 2 3 4 6 7 8 9 10
        }
        printf("%1d ",i);
    }
    return 0;
getch();
}
