#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        int data;
        struct node *link;
}node;
// First Method Using single pointer
/*
void delLast(node *head){

        if(head==NULL)
            printf("list is already empty");
        else if(head->link==NULL){
                free(head);
                head=NULL;
        }else{


            node *temp=head;
            while(temp->link->link!=NULL){
                temp=temp->link;
            }
            free(temp->link);
            temp->link=NULL;
        }
}
int main(){
    node *head=malloc(sizeof(node));
    head->data=23;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=24;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(node));
    current->data=25;
    current->link=NULL;
    head->link->link=current;

    delLast(head);
    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
*/
// Second Method Using single pointer
/*
node *delLast(node *head){
        if(head==NULL)
            printf("list is already empty");
        else if(head->link==NULL){
                free(head);
                head=NULL;
        }else{
            node *temp=head;

            while(temp->link->link!=NULL){
                temp=temp->link;
            }
            free(temp->link);
            temp->link=NULL;
        }
        return head;
}
int main(){
    node *head=malloc(sizeof(node));
    head->data=23;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=24;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(node));
    current->data=25;
    current->link=NULL;
    head->link->link=current;

    head=delLast(head);
    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
*/

// First Method Using two pointers
/*
void dellast(node *head){
    if(head==NULL)
        printf("list is already empty");
    else if(head->link==NULL){
            free(head);
            head=NULL;
    }else{
        node *temp=head;
        node *temp2=head;

        while(temp->link!=NULL){
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
   }
}
int main(){
    node *head=malloc(sizeof(node));
    head->data=23;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=24;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(node));
    current->data=25;
    current->link=NULL;
    head->link->link=current;

    dellast(head);
    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
*/
// Second Method Using two pointers
node *dellast(node *head){
    if(head==NULL)
        printf("list is already empty");
    else if(head->link==NULL){
            free(head);
            head=NULL;
    }else{
        node *temp=head;
        node *temp2=head;

        while(temp->link!=NULL){
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;

        return head;
   }
}
int main(){
    node *head=malloc(sizeof(node));
    head->data=23;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=24;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(node));
    current->data=25;
    current->link=NULL;
    head->link->link=current;

    head=dellast(head);
    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
