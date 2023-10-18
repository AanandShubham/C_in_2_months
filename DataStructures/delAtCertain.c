#include<stdlib.h>
#include<stdio.h>

typedef struct node{
        int data;
        struct node *link;
}node;
// Method 1;
/*
node *delAtCert(node *head,int n){
        if(head==NULL)
            printf("list is already empty");
        else{
            int count=1;
            node *temp=NULL;
            node *temp2=head;
            while(count!=(n-1)){
                temp2=temp2->link;
                count++;
            }
            temp=temp2->link;
            temp2->link=temp->link;
            free(temp);
            temp=NULL;
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

    head=delAtCert(head,4);

    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
*/

// Method 2;
void delAtCert(node *head,int n){
        if(head==NULL)
            printf("list is already empty");
       // else if(n==1) {
         //   node *temp=head->link;
           // node *temp2=head;
            //free(temp2);
            //temp2=NULL;
            //head=temp->link;
       //}
       else{
            int count=1;
            node *temp=NULL;
           // node *temp2=head;
            while(count!=(n-1)){
                head=head->link;
                count++;
            }
            temp=head->link;
            head->link=temp->link;
            free(temp);
            temp=NULL;
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

    delAtCert(head,3);

    current=head;

    while(current!=NULL){
        printf("%d ",current->data);
        current=current->link;
    }
}
