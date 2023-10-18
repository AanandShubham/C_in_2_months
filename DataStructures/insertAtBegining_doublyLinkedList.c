#include<stdio.h>
#include<stdlib.h>
typedef struct node{
        struct node *prev;
        int data;
        struct node *next;
}node;
node *addAtBeg(node *head,int data){
        node *ptr=malloc(sizeof(node));
        ptr->prev=NULL;
        ptr->data=data;
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
        return head;
}

int main(){
        node *head=malloc(sizeof(node));
        head->prev=NULL;
        head->data=34;
        head->next=NULL;

        node *current=malloc(sizeof(node));
        current->prev=head;
        current->data=35;
        current->next=NULL;
        head->next=current;

        current=malloc(sizeof(node));
        current->prev=head->next;
        current->data=36;
        current->next=NULL;
        head->next->next=current;

        head=addAtBeg(head,33);
        head=addAtBeg(head,32);
        current=head;
        while(current!=NULL){
            printf("%d ",current->data);
            current=current->next;
        }
}
