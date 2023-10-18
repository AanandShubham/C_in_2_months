#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

// First Method

struct node *add(node *current){
        node *add=malloc(sizeof(node));
        printf("enter the no to add : ");
            scanf("%d",&add->data);
        add->link=NULL;
        current->link=add;
        return (current->link);
}

int main(){
    node *head=malloc(sizeof(node));
    head->data=34;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=354;
    current->link=NULL;
    head->link=current;

    int n;
    printf("how many numbers you want to add : ");
        scanf("%d",&n);

    for(int x=0;x<n;x++)
         current=add(current);
   // current=current->link;
    //current=add(current);
    //printf("%d ",current->data); //354
   // printf("%d ",current->data); //45
    node *print;
    print=head;
    while(print!=NULL){
        printf("%d ",print->data);
        print=print->link;
    }
}

// Second Method
/*
void add_at_end(node *head,int num){
        node *ptr,*temp;

        ptr=head;

        temp=(node*)malloc(sizeof(node));
        temp->data=num;
        temp->link=NULL;

        while(ptr->link!=NULL)
            ptr=ptr->link;

        ptr->link=temp;
}
void print(node *head){
    node *ptr=head;

    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    node *head=malloc(sizeof(node));
    head->data=94;
    head->link=NULL;

    node *current=malloc(sizeof(node));
    current->data=87;
    current->link=NULL;
    head->link=current;

    add_at_end(head,98);
    print(head);
  return 0;
}
*/
