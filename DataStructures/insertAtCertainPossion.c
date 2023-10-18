#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

void addAtCert(node *head,int poss){
        node *temp=malloc(sizeof(node));
        temp->data=40;
        temp->link=NULL;

        int count=1;

        while(head!=NULL){
            count++;
            if(count==poss){
                temp->link=head->link;
                head->link=temp;
               // break;
            }
            head=head->link;
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
    current->data=50;
    current->link=NULL;
    head->link->link->link=current;

    current=malloc(sizeof(node));
    current->data=60;
    current->link=NULL;
    head->link->link->link->link=current;

    addAtCert(head,4);

    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
