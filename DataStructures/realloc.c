#include<stdio.h>
#include<conio.h>

int main(){
    int *ptr=(int*)malloc(2*sizeof(int));

        if(ptr==NULL){
            printf("Memory not available ");
            exit(0);
        }

        for(int x=0;x<2;x++){
            printf("enter the %d element : ",x+1);
                scanf("%d",ptr+x);
        }

        ptr=(int*)realloc(ptr,4*sizeof(int));

        for(int x=2;x<4;x++){
            printf("enter the %d element : ",x+1);
                scanf("%d",ptr+x);
        }

        printf("Printing all value :-  ");
        for(int x=0;x<4;x++)
            printf("%d ",*(ptr+x));
 return 0;
}
