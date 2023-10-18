// Create your own string copy function

#include<stdio.h>
char cpy(char a[],char c[]);
int main()
{
    char copy[15]="Hello you ";
    char get[15];
    cpy(get,copy);
    printf("first = %s ",copy);
    printf("second = %s ",get);
    return 0;
}
char cpy(char a[],char c[])
{
    int l;
    for(l=0;c[l]!='\0';l++)
          a[l]=c[l];
     a[l]='\0';
}




