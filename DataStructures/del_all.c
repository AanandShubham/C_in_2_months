#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        int data;
        struct node *link;
}node;

node *delAll(node *head){
        node *temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->link;
            free(head);
            head=temp;
        }
       return head;
}
int main(){
    node *head=malloc(sizeof(node));
    head->data=10;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=20;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(node));
    current->data=30;
    current->link=NULL;
    head->link->link=current;

    current=malloc(sizeof(node));
    current->data=50;
    current->link=NULL;
    head->link->link->link=current;

    current=malloc(sizeof(node));
    current->data=60;
    current->link=NULL;
    head->link->link->link->link=current;

    head=delAll(head);
    if(head==NULL)
        printf("list is deleted successfully");
    else
        printf("list is not empty");

}
