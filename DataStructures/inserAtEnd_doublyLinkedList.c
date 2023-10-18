#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        struct node *prev;
        int data;
        struct node *next;
}node;
void addAtEnd(node *head,int data){
        if(head==NULL){
            node *ptr=malloc(sizeof(node));
            ptr->prev=NULL;
            ptr->data=data;
            ptr->next=NULL;
            head=ptr;
        }else if(head->next==NULL){
                node *ptr=head;
                node *temp=malloc(sizeof(node));
                temp->prev=ptr;
                temp->data=data;
                temp->next=NULL;
                ptr->next=temp;
        }else{
            node *ptr=head;
            node *temp=malloc(sizeof(node));
            temp->prev=NULL;
            temp->data=data;
            temp->next=NULL;

            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=temp;
            temp->prev=ptr;
        }
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


        addAtEnd(head,37);
        addAtEnd(head,38);

        current=head;
        while(current!=NULL){
            printf("%d ",current->data);
            current=current->next;
        }
}
