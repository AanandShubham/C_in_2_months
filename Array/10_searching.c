// Binary Search : Searching the elements in array;
#include<stdio.h>
int main()
{
    int a[4],n,cheak,x;
    printf("enter the 4 elements of the array : ");
    for(int x=0;x<4;x++)
        scanf("%d",&a[x]);
    printf("enter the no to search: ");
       scanf("%d",&n);
    for( x=0;x<4;x++)
    if(a[x]==n){
           cheak=1;
        break;
    }
    else
        cheak=0;
    if(cheak==0)
        printf("no is not present in the array !");
    else
        printf("no is present at A[%d] place ",x+1);

}
