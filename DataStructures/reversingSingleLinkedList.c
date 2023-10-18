#include<stdio.h>
#include<stdlib.h>
typedef struct node{
        int data;
        struct node *link;
}node;

node *revAll(node *head){
        node *ptr=head;
        node *temp=NULL;
        while(ptr!=NULL){
            ptr=ptr->link;
            head->link=temp;
            temp=head;
            head=ptr;
        }
    return temp;
}
node *revRec(node *head){
        node *ptr;
        if(head->link==NULL){
            ptr=head;
            return ptr;
        }else {
            ptr=revRec(head->link);
            node *temp=head->link;
            temp->link=head;
            head->link=NULL;
            return ptr;
        }
}
node *rev(node *head,node *temp){
        if(head->link==NULL){
            head->link=temp;
            return head;
        }else {
            node *ptr=head->link;
            ptr->link=head;
            head->link=temp;
            temp=head;
            head=ptr;
            return rev(ptr,temp);
        }
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
    current->data=40;
    current->link=NULL;
    head->link->link->link=current;

    current=malloc(sizeof(node));
    current->data=50;
    current->link=NULL;
    head->link->link->link->link=current;

    current=head;
    printf("list before reverse : ");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }

    //head=revAll(head);
    head=revRec(head);
    //head=rev(head,NULL);
    current=head;
    printf("\nlist After reverse  : ");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
