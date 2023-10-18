#include<stdio.h>
#include<stdlib.h>

int *input(){
    int *ptr=(int*)malloc(5*sizeof(int));

    for(int x=0;x<5;x++){
        printf("enter the element : ");
            scanf("%d",ptr+x);
    }
    return ptr;
}

int main(){
    int *ptr,sum=0;
    ptr=input();

    for(int x=0;x<5;x++)
        sum+=*(ptr+x);
    printf("sum = %d",sum);

    free(ptr);

    ptr=NULL;

    return 0;
}
