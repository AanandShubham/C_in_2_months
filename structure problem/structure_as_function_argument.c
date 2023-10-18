// Write a program in which structure members are passed to function as a copy of structure

#include<stdio.h>
struct store
{
    char name[20];
    int price;
    int item;
};
struct store takeitem(struct store );

struct store mul(struct store );

int main()
{
    struct store item={"ram",53,2};
    printf("name %s \nprice %d \nitemno %d\n",item.name,item.price,item.item);

    struct store item1=takeitem(item);
    printf("name %s \nprice %d \nitemno %d\n",item1.name,item1.price,item1.item);

    struct store multiple=mul(item);
    printf("Multiple = %d \n",multiple.price);
    printf("size %d",sizeof(takeitem));
}

struct store takeitem(struct store take)
{
    strcpy(take.name,"lolaram");
    take.price=3;
    take.item=455;
    return take;
}

struct store mul(struct store m)
{
 m.price*=m.item;
 return m;
};
