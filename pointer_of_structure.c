// Write a program to access structure member through pointer

#include<stdio.h>
#include<stdlib.h>
typedef struct abc{
    int x,y;
}abc;
int main()
{
    abc a={1,5};
    abc *ptr=&a;
    printf("%d %d ",(*&a).x,ptr->y);
    printf("%d %d",(*ptr).x,(*ptr).y);

    // All the methods which are used to access these structure members are valid
}


