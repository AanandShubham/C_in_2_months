#include<stdio.h>
#include<stdlib.h>

typedef struct pbook{
    char name[20];
    char no[13];
}pbook;
pbook *ptr;
int n=1;
void add();
void show();
void ext(){
    exit(0);
}
int main(){
        void (*pf[3])()={add,show,ext};
        int no;
        ptr=(pbook*)malloc(sizeof(pbook));
        if(ptr==NULL){
            printf("Memory not availavle");
        }
        printf("enter the name : ");
            gets(ptr->name);
        printf("enter the phone no : ");
            gets(ptr->no);
       while(1){
       printf("\n0 for add | 1 for show | 2 for exit ");
            scanf("%d",&no);
        pf[no]();
       }
}
void add(){
    n++;
    ptr=(pbook*)realloc(ptr,n*sizeof(pbook));
    printf("\nenter the name : ");
        fflush(stdin);
        gets((ptr+(n-1))->name);
    printf("enter the phone no : ");
        fflush(stdin);
        gets((ptr+(n-1))->no);
    return;
}

void show(){
    for(int x=0;x<n;x++){
             fflush(stdin);
        printf("\nname : %s\n",(ptr+x)->name);
            fflush(stdin);
        printf("NO : %s\n",(ptr+x)->no);
    }
}
