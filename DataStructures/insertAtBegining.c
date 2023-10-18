#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;
// Method 1;
/*
node *insertAtBegining(node *head){
        node *temp=malloc(sizeof(node));
        temp->data=34;
        temp->link=head;
        head=temp;
        return head;
}

int main(){
    node *head=malloc(sizeof(node));
    head->data=45;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=55;
    current->link=NULL;
    head->link=current;

    head=insertAtBegining(head);
    head=insertAtBegining(head);

    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
*/
// Method 2 ;
void insertAtBegning(node **head){
        node *temp=malloc(sizeof(node));
        temp->data=34;
        temp->link=*head;
        *head=temp;
}
int main(){
    node *head=malloc(sizeof(node));
    head->data=45;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=55;
    current->link=NULL;

    head->link=current;

    insertAtBegning(&head);
    insertAtBegning(&head);
    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }

}
