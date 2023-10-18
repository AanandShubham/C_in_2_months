#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        struct node *prev;
        int data;
        struct node *next;
}node;
node *addToEmpty(node *head){
        node *temp=malloc(sizeof(node));
        temp->prev=NULL;
        temp->data=45;
        temp->next=NULL;
        head=temp;
    return head;
}
int main(){
    node *head=NULL;
    head=addToEmpty(head);
    printf("%d ",head->data);
}

