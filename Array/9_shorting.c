// selection short : arranging the elements in assending order

#include<stdio.h>
int main()
{
    int a[5];
    int x,y,cheak,min;
    printf("enter the 5 elements of the array: ");
      for(x=0;x<5;x++)
          scanf("%d",&a[x]);

    for(x=0;x<5;x++)
    {
         min=a[x];

        for(y=x;y<5;y++)
        {
             cheak=min;

            if(a[y]<min)
            {
                min=a[y];
                a[y]=cheak;
            }
        }
        a[x]=min;
    }
    printf("elements after sorted : ");
    for(x=0;x<5;x++)
        printf("%d ",a[x]);
}
