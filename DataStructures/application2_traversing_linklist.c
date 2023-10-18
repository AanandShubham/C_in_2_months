#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

void print_data(node *head){
    if(head==NULL){
        printf("linked list is empty ");
        return;
    }
    while(head!=NULL){
        printf("%d  ",head->data);
        head=head->link;
    }
}
void preverse(node *head){
        if(head==NULL)
            return;
        else{
            preverse(head->link);
            printf("%d ",head->data);
//recursion
        }
}

int main(){
    node *head=malloc(sizeof(node));

    head->data=94;
    head->link=NULL;

    node *current=(node*)malloc(sizeof(node));

    current->data=97;
    current->link=NULL;
    head->link=current;

    current=(node*)malloc(sizeof(node));
    current->data=5;
    current->link=NULL;
    head->link->link=current;

   // print_data(head);
    preverse(head);
    return 0;
}
