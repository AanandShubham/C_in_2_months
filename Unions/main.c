// Unions shares same memory location
// prof that fact with a program
#include <stdio.h>
#include <stdlib.h>
/*
union abc
{
    int a;
    char b;
}a;
int main()
{
  a lol;
  lol.a=65;
   printf("%d ",lol.a);
   printf("%c",lol.b);

    return 0;
}
*/
union abc
{
    int a;
    char b;
    double c;
    float d;
};
int main()
{
    printf("%ld",sizeof(union abc));
}
