#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        struct node *prev;
        int data;
        struct node *next;
}node;

void addToCert(node *head,int pos,int data){
        if(pos==1){
            node *temp=malloc(sizeof(node));
            temp->prev=NULL;
            temp->data=data;
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        else
            printf("poss not found");
}
int main(){
    node *head=malloc(sizeof(node));
    head->prev=NULL;
    head->data=0;
    head->next=NULL;

    node *current=malloc(sizeof(node));
    current->prev=head;
    current->data=2;
    current->next=NULL;
    head->next=current;

    current=malloc(sizeof(node));
    current->prev=head->next;
    current->data=3;
    current->next=NULL;
    head->next->next=current;

    addAtCert(head,1,7);
    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
}
