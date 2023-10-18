#include<stdio.h>
#pragma pack(1) // Structure packing:- it saves the memory wasted from structure padding
struct abc{
int a;
double b;
};
int main()
{
   struct abc a;
   printf("%d",sizeof(a));
}

