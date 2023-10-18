#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

void delTheFirst(node *head){
        if(head==NULL){
            printf("list is already empty");
        }else{
        node *ptr=head->link;
        free(head);
        head=ptr;
        }
        //return head;
}
int main(){
    node *head=malloc(sizeof(node));
    head->data=4;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=5;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(node));
    current->data=6;
    current->link=NULL;
    head->link->link=current;

    delTheFirst(head);
    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
