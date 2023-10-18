#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
   struct node *link;
}node;

// Method 1;
/*
int main(){
    node *head=malloc(sizeof(node));

    head->data=94;
    head->link=NULL;

    node *current=(node*)malloc(sizeof(node));

    current->data=97;
    current->link=NULL;
    head->link=current;

   node *current2=(node*)malloc(sizeof(node));
    current2->data=5;
    current2->link=NULL;
    current->link=current2;

    printf("%d",current->link->data);

    return 0;
}
*/

// Method 2;

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

    printf("%d",head->link->link->data);

    return 0;
}







