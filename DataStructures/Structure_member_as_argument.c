#include<stdio.h>
#include<string.h>

// call by value
/*
struct student{
    char name[20];
    int roll;
};
void show(struct student *s1){
    printf("name = %s",s1->name);
}

int main(){
    struct student s2;
    strcpy(s2.name,"lolaram");
    show(&s2);
}
*/
// call by refarence
/*

struct charSet{
    char s;
    int x;
};

void keyValue(char *c,int *x){
    printf("enter the char and it's value : ");
    scanf("%c %d",c,x);
}

int main(){
    struct charSet cs;

    keyValue(&cs.s,&cs.x);

    printf("%c %d",cs.s,cs.x);
    return 0;
}
*/

// returning a structure variable from a function
/*
struct point{
    int x;
    int y;
};
struct point val(){
    struct point v1={3,5};
    return v1;
}
int main(){
    struct point p=val();

    printf("%d %d ",p.x,p.y);

}
*/

// returning a pointer to a structure from the function
/*
struct point{
    int x;
    int y;
};

struct point* p(){
        struct point ptr={4,6};
        struct point *pt=&ptr;

        return pt;
}
int main(){
    struct point *pp=p();
    printf("%d %d",pp->x,pp->y);
}
*/
// another example
/*

#include<stdlib.h>

struct point{
    int x;
    int y;
};
struct point* fun(int a,int b){
    struct point *ptr=(struct point*)malloc(sizeof(struct point));

    ptr->x=a;
    ptr->y=b+5;
    return ptr;
}

void print(struct point *ptr){
    printf("%d %d",ptr->x,ptr->y);
}
int main(){
    struct point *p;
    p=fun(4,6);

    print(p);
    free(p);
    return 0;
}

*/

// passing array of structure as argument

struct point{
    int x;
    int y;
};

void print(struct point p[],int a){
    for(int i=0;i<a;i++){
        printf("value of %d structure is = %d %d\n",i+1,p[i].x,p[i].y);
    }
}
int main(){
    struct point ptr[2]={{1,2},{3,4}};
   // ptr[0]={1,2};
    //ptr[1]={3,4};
    print(ptr,2);
}
