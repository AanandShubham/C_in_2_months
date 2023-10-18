#include<stdio.h>
#include<stdlib.h>
/*
int read(char str[],int n);
int main()
{
    char name[100];
    int no;
    no=read(name,6);
    printf("no of char = %d ",no);

}
int read(char str[],int n)
{
    int i=-1;
    while((str[i++]=getchar())!='\n');

          return i;
}
*/
int input(char str[],int n)
{
    int ch,i=0;
    while((ch=getchar())!='\n') // 10 is the ASCII code of '\n'
        if(i<n)
           str[i++]=ch;
       str[i]='\0';
       return i;
}
int main()
{
    char str[100];
    int n=input(str,6);
    printf("%d %s ",n,str);
    return 0;
}
