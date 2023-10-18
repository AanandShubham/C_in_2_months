#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

void countNodes(node *head){
     int count=0;

    node *cheak;

    cheak=head;

    while(cheak!=NULL){
            count++;
        cheak=cheak->link;
    }

    printf("Number of nodes = %d",count);

}
void add(node *head){
    node *lol=malloc(sizeof(node));
    lol->data=99;
    lol->link=NULL;
    head->link->link->link=lol;
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

    add(head);

    countNodes(head);



    return 0;
}
