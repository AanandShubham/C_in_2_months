#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
        printf("enter the size of array : ");
            scanf("%d",&n);
    int *ptr=(int*)calloc(n*sizeof(int));

        for(int x=0;x<n;x++){
            printf("enter the element : ");
                scanf("%d",ptr+x);
        }

        printf("elements are :--- ");

        for(int x=0;x<n;x++){
            printf("%d ",*(ptr+x));
        }
}
